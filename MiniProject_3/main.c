// Organization: Indian Institute of Science, Dept of Electronic Systems Engg.
// Authors     : V. Naveen Chander, Sai Vamshi K 
// Project     : MNIST Digit Recognition on Cortex M4
// Description : Acquires an image of size 100 Bytes (4 Byte Header per frame)
//               Generic C Code for 4 layered perceptron 
//               NN Architecture : 100 -->30 -->16-->10
//               Activation : ReLu
//               Optimizations : 1. Quantization (16 bit) Fixed Point
//                               2. Multiplierless Optimization    
//                               3. PCA for reducing Input size to 100 B
//               In the End, A max_finder() will find the maximum likely digit 
// ***************************************************************************
/** Required files : input_images.h
// ****************************************************************************
 * main.c
 */
#include <string.h>
#include <ctype.h>
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include "inc/tm4c123gh6pm.h"
#include "my_header.h"


my_num img_buf[100];
int col = 0;
int recv_counter = 0;
int recv_num_counter = 0;
int space_counter=0;
char read_val;
char num_char[20];
int pflag=0;
uint8_t header_count = 0;
uint8_t start_read = 0;
my_num output[n4];
char max_id;

char welcome_msg[] ="*******************UART Terminal ***************** \
\n Waiting for UART packets...\n\
****************************************************************************\n";
// Function Seclaration
void uart0_send(char ch);
void uart0_cfg();
void uart0_int_enable();
char uart0_read();
void blink_blue();
void blink_red();
void blink_green();
void uart0_interrupt_clr();
void uart_mesg_disp(char *inp_str);
void WaitForInterrupt(void);
void delayMs(int n);
my_num get_max_idx(my_num input_arr[n4]);
char debug_buf[500];
#define DEBUG 1


int main(void)
{
    uart0_cfg();
    uart0_int_enable();
    uart_mesg_disp(welcome_msg);

  //  my_num img_buf[100] = {0xeb,0x2f,0xfd,0xec,0xe1,0xf,0x19,0x1e,0xe7,0xf4,0xc,0xf9,0x2,0xf2,0xf7,0xfb,0x12,0x10,0x5,0x4,0xfd,0xf,0x3,0xfb,0xf8,0xfd,0x9,0xfe,0x1,0xf3,0x5,0xed,0x5,0xf6,0xfe,0xb,0xfa,0xf9,0x2,0x5,0xee,0x5,0x7,0xfd,0xf5,0xfe,0x6,0xfc,0x100,0xf9,0x100,0xf6,0xfe,0xfa,0xf9,0x100,0xfd,0x4,0x100,0x9,0xfd,0xf9,0xfd,0xfd,0x3,0xfd,0xfc,0x1,0x8,0x2,0xfe,0x7,0xfe,0x5,0xf9,0x8,0x2,0x6,0x6,0x5,0xfe,0x3,0xfc,0xfe,0xfa,0x100,0x100,0xfb,0x2,0xfd,0xff,0x2,0x6,0xfe,0xff,0xfd,0xfe,0xfc,0xfe,0xf8};

    while(1)
    {
       // WaitForInterrupt();

       // pflag=1;
        if (pflag)
        {
            //blink_red();

            ann(img_buf,output);

            max_id = (char) get_max_idx(output);

            uart0_send('0'+max_id);

            blink_green();
            pflag = 0;
            for (int m=0;m<500;m++)
                debug_buf[m]=0;

        }
        else
            blink_blue();
    }
    return 0;
}

my_num get_max_idx(my_num input_arr[n4])
{
    my_num max_idx= 0;
    for(int i = 0;i < n4;i++)
    {
        if (input_arr[i] > input_arr[max_idx])
            max_idx =i;
    }
    return max_idx;
}

void uart0_cfg()
{
    SYSCTL_RCGCUART_R = 0x1 ;  //UART 0 EN
    SYSCTL_RCGCGPIO_R = 0x23;
    UART0_CTL_R       |= 0x0 ; //Disable UART
    UART0_IBRD_R      = 8;
    UART0_FBRD_R      = 44;
    UART0_LCRH_R      = (1<<5)|(1<<6);   //(1<<4) if FIFO is reqd
    UART0_CTL_R       |= ((1<<4)|(1<<0));    // FIFO EN AND UART0 EN
    GPIO_PORTA_DIR_R  = 0x02;
    GPIO_PORTA_DEN_R  = 0x03;
    //GPIO Alternate Fn
    GPIO_PORTA_AFSEL_R = 0x3;
    GPIO_PORTA_PCTL_R  = 0x11;
    GPIO_PORTA_AMSEL_R = 0x00;
    // for debug
    GPIO_PORTF_DIR_R |= 0x0E;   // For RGB leds
    GPIO_PORTF_DEN_R |= 0x0E;
}

void uart0_int_enable()
{
    UART0_ICR_R       = (1 << 4);        /*  Clear flag4 */
    UART0_IM_R        = (1 << 4);        /*  arm interrupt on RX */
    NVIC_PRI1_R       = (NVIC_PRI1_R & 0xFFFF1FFF) | 0x0000A000; /*  priority 5 */
    NVIC_EN0_R        = 0x0000020;        /*  Enable interrupt 5 in NVIC */
}

void uart0_Interrupt_handler()
{

       uart0_interrupt_clr();

       read_val = uart0_read();
       debug_buf[recv_counter] = read_val;
       recv_counter++;
       if (start_read == 0)
       {

           // Header Decoding STate Machine
           if(header_count ==0)
           {
               if(read_val == 0xAA)
               {
                   header_count = 1;
                   start_read =0;
               }
               else
               {
                   header_count = 0;
                   start_read =0;
               }
           }
           else if(header_count==1)
           {
               if(read_val == 0x55)
               {
                   header_count = 2;
                   start_read = 0;
               }
               else
               {
                   header_count = 0;
                   start_read = 0;
               }
           }
           else if(header_count ==2)
           {
               if(read_val == 0xBB)
               {
                   header_count = 3;
                   start_read = 0;
               }
               else
               {
                   header_count = 0;
                   start_read = 0;
               }
           }
           else if(header_count ==3)
           {
               if(read_val == 0x66)
               {
                   header_count = 4;
                   start_read = 1;
               }
               else
               {
                   header_count = 0;
                   start_read = 0;
               }
           }
       }

       else
       {
           my_num current_num = (my_num ) read_val;
           if(current_num < 128)
           {
               img_buf[recv_num_counter]=current_num;

           }
           else
           {
                img_buf[recv_num_counter]=current_num-256;
            }
           recv_num_counter++;

       }
       //-------------------------------------------------------------//
       // Check for full buffer
       if (recv_num_counter==100)
       {
               pflag=1;
               recv_num_counter=0;
               recv_counter=0;
               start_read=0;
               header_count=0;
        }
        else
               pflag=0;

}

char uart0_read()
{
    char read_val;

    //if ((UART0_FR_R & (1<<4)) == (1<<4))
    //    printf("Receive FIFO EMPTY\n");

    read_val = UART0_DR_R;
    //printf("Read Byte : %c \n",read_val);
    return ((char )read_val);
}

void blink_blue()
{
   // Blink  LED thrice
        for(int i = 1;i<=2;i++)
        {
            GPIO_PORTF_DATA_R = 0x04; /* BLUE LED */
            delayMs(100);
            GPIO_PORTF_DATA_R = 0;     /* turn off all LEDs */
            delayMs(100);
        }
}

void blink_red()
{
   // Blink  LED thrice
        for(int i = 1;i<=3;i++)
        {
            GPIO_PORTF_DATA_R = 0x02; /* RED LED */
            delayMs(100);
            GPIO_PORTF_DATA_R = 0;     /* turn off all LEDs */
            delayMs(100);
        }
}

void blink_green()
{
   // Blink  LED thrice
        for(int i = 1;i<=3;i++)
        {
            GPIO_PORTF_DATA_R = 0x08; /* RED LED */
            delayMs(100);
            GPIO_PORTF_DATA_R = 0;     /* turn off all LEDs */
            delayMs(100);
        }
}

void delayMs(int n)
{
    int i, j;
    for(i = 0 ; i < n; i++)
        for(j = 0; j < 3180; j++){} /* do nothing for 1 ms */
}

void uart0_interrupt_clr()
{
    int readback;
    UART0_ICR_R        = (1<<4);             /* clear RX Interrupt */
    GPIO_PORTF_DATA_R ^= (1<<3);    /* toggle Green LED */
    readback = UART0_ICR_R;    /* a read to force clearing of interrupt flag */
    readback = readback;
}

void uart_mesg_disp(char *inp_str)
{
    GPIO_PORTF_DATA_R = 0xE;  // Turn White LED ON
    int count = 0;
    while ( inp_str[count] != '\0')
    {
        uart0_send(inp_str[count]);
        count ++;
    }
}

void WaitForInterrupt(void)
{
    __asm  ("    WFI\n");
}

void uart0_send(char ch)
{
    //if((UART0_FR_R & (1<<5) ) != (1<<5))
    //{
    while(   (UART0_FR_R & 0x80 ) != 0x80)  {}//GPIO_PORTF_DATA_R = 0x8;}
        UART0_DR_R = ch;
    //}
}



