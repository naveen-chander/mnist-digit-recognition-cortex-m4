// C library headers
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <inttypes.h>
#include "input_images.h"
// Linux headers
#include <fcntl.h> // Contains file controls like O_RDWR
#include <errno.h> // Error integer and strerror() function
#include <termios.h> // Contains POSIX terminal control definitions
#include <unistd.h> // write(), read(), close()

int uart_send(int8_t* msg);
int main()
{
    printf("********************WELCOME************************\n");
    printf("*HANDWRITTIN DIGIT RECOGNITION USING ARM CORTEX M4*\n");
    printf("*E3-257 Embedded Systems Course Project (2020)    *\n");
    printf("*Team : Naveen Chander, Sai Vamshi                *\n");
    printf("***************************************************\n");
    printf("*                   INSTRUCTIONS                  *\n");
    printf("* Select any Image out of 100 images              *\n");
    printf("* ------------------------------------------------*\n");
    printf("*                                                 *\n");
    printf("*                                                 *\n");
    printf("*                                                 *\n");
    printf("*                                                 *\n");
    printf("*                                                 *\n");
    printf("*                                                 *\n");

    int image_id;
    int8_t msg[100];
    while(1)
    {
        printf("* Enter a number between 0 to 99                  *\n");
        scanf("%d",&image_id);
        if ((image_id>=0) || (image_id<100))
        {
            printf("The Image Number entered is :%d\n",image_id);
            // Store the requd input image into msg
            for (int idx=0;idx<100;idx++)
                msg[idx]=test_img[image_id][idx];

            uart_send(msg);
            
            printf("* ------------------------------------------------*\n");
            printf("*                                                 *\n");
            printf("*                                                 *\n");
            printf("*                                                 *\n");
            printf("*                                                 *\n");
            printf("*                                                 *\n");
            printf("*                                                 *\n");
        }          
        else
        {
            printf("Error: Enter number between 0 and 99\n");
        }
    }      
    return 0;
}

int uart_send(int8_t* msg)
{
int serial_port = open("/dev/ttyACM0", O_RDWR);
if (serial_port < 0) {
    printf("Error %i from open: %s\n", errno, strerror(errno));
}


// Create new termios struc, we call it 'tty' for convention
struct termios tty;
memset(&tty, 0, sizeof tty);

// Read in existing settings, and handle any error
if(tcgetattr(serial_port, &tty) != 0) {
    printf("Error %i from tcgetattr: %s\n", errno, strerror(errno));
}


tty.c_cflag &= ~PARENB; // Clear parity bit, disabling parity (most common)
tty.c_cflag &= ~CSTOPB; // Clear stop field, only one stop bit used in communication (most common)
tty.c_cflag |= CS8; // 8 bits per byte (most common)
tty.c_cflag &= ~CRTSCTS; // Disable RTS/CTS hardware flow control (most common)
tty.c_cflag |= CREAD | CLOCAL; // Turn on READ & ignore ctrl lines (CLOCAL = 1)

tty.c_lflag &= ~ICANON;
tty.c_lflag &= ~ECHO; // Disable echo
tty.c_lflag &= ~ECHOE; // Disable erasure
tty.c_lflag &= ~ECHONL; // Disable new-line echo
tty.c_lflag &= ~ISIG; // Disable interpretation of INTR, QUIT and SUSP
tty.c_iflag &= ~(IXON | IXOFF | IXANY); // Turn off s/w flow ctrl
tty.c_iflag &= ~(IGNBRK|BRKINT|PARMRK|ISTRIP|INLCR|IGNCR|ICRNL); // Disable any special handling of received bytes

tty.c_oflag &= ~OPOST; // Prevent special interpretation of output bytes (e.g. newline chars)
tty.c_oflag &= ~ONLCR; // Prevent conversion of newline to carriage return/line feed
// tty.c_oflag &= ~OXTABS; // Prevent conversion of tabs to spaces (NOT PRESENT ON LINUX)
// tty.c_oflag &= ~ONOEOT; // Prevent removal of C-d chars (0x004) in output (NOT PRESENT ON LINUX)

tty.c_cc[VTIME] = 30;    // Wait for up to 1s (30 deciseconds), returning as soon as any data is received.
tty.c_cc[VMIN] = 0;

// Set in/out baud rate to be 9600
cfsetispeed(&tty, B115200);
cfsetospeed(&tty, B115200);

// Save tty settings, also checking for error
if (tcsetattr(serial_port, TCSANOW, &tty) != 0) {
    printf("Error %i from tcsetattr: %s\n", errno, strerror(errno));
}

// Write to serial port
//unsigned char msg[] = { 'H', 'e', 'l', 'l', 'o', '\r' };
//write(serial_port, "Hello, world!", sizeof(msg)+7);

FILE *fp = fopen("input_text.txt","r");
int count =0;
char header[8] = {0xAA, 0x55, 0xBB, 0x66};
write(serial_port,header, 4);
//printf("Read Byte %d =%d \n",count,read_byte);
int8_t send_buf[1];
char h,t,u;

for (int i =0;i<100;i++)
{
    if(msg[i] >0)
    {
      send_buf[0]=msg[i];
      write(serial_port,send_buf, 1);
     // usleep(100);
    }   
    else 
    {
      send_buf[0]=256 - abs(msg[i]);
      write(serial_port,send_buf, 1);
      usleep(100);
     }   
}
    // Allocate memory for read buffer, set size according to your needs
    char read_buf [1];
    memset(&read_buf, '\0', sizeof(read_buf));

    // Read bytes. The behaviour of read() (e.g. does it block?,
    // how long does it block for?) depends on the configuration
    // settings above, specifically VMIN and VTIME
    tcflush(serial_port,TCIFLUSH);
    int num_bytes = read(serial_port, &read_buf, sizeof(read_buf));
    if (num_bytes < 0)
    printf("Error reading: %s", strerror(errno));

    //num_bytes = read(serial_port, &read_buf, sizeof(read_buf));
    // n is the number of bytes read. n may be 0 if no bytes were received, and can also be -1 to signal an error.


// Here we assume we received ASCII data, but you might be sending raw bytes (in that case, don't try and
// print it to the screen like this!)
printf("Read %i bytes. Image Identified as: %c \n", num_bytes, read_buf[0]);
            printf("*                                                 *\n");
            printf("*                                                 *\n");
            printf("*                                                 *\n");
            printf("*                                                 *\n");
            printf("*                                                 *\n");
close(serial_port);
}

