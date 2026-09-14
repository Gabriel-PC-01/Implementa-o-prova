#include <stdio.h>
//1010
//10
//101
//1011

typedef unsigned char uchar;


int main(){

    uchar R, G, B;
    uchar b0, b1, b2;
    uchar M;


    printf("Informe o valor de R:");
    scanf("%hhu", &R);
    printf("Informe o valor de G:");
    scanf("%hhu", &G);
    printf("Informe o valor de B:");
    scanf("%hhu", &B);
    printf("Informe o valor de M:");
    scanf("%hhu", &M);


    b0 = M & 1;
    b1 = (M >> 1) & 1;
    b2 = (M >> 2) & 1;

    R = (254 & R) | b0; 
    G = (254 & G) | b1; 
    B = (254 & B) | b2; 


    printf("valor de 0: %hhu \n", b0);
    printf("valor de 1: %hhu \n", b1);
    printf("valor de 2: %hhu \n", b2);

    printf("valor de R: %hhu \n", R);
    printf("valor de G: %hhu \n", G);
    printf("valor de B: %hhu \n", B);
