

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

#define pca 1

#define n1  100

#define n2  30
#define n3  16
#define n4  10





typedef int16_t my_num;
//typedef float my_num;
typedef uint8_t weight_index;    // was unsigned ap_int 4 before
typedef uint16_t mat_dim;        // was unsigned ap_int 10 before


void compliment_2(my_num a,my_num *b);

void my_mult(my_num a,weight_index i,my_num *c);

void relu(my_num a,my_num *b);

//void sigmoid(my_num a,my_num *b);

//void my_mat_mul(my_num *a,weight_index *b,mat_dim i,mat_dim j,mat_dim k,my_num *c);

void ann(my_num* input, my_num* output);



