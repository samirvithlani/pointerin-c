#include<stdio.h>

void main(){


    int a = 10;
    int b = 20;
    printf("\n value of a = %d",a);
    printf("\n address of a = %u",&a);
    //printf("\n valud of a = %p",&a);
    printf("\n value of b = %d",b);
    printf("\n address of b = %u",&b);

    int *p = &a; // 300
    p = &b; //92
    //300 --> p -->300  [10]
    printf("\n value of p = %d",*p);
    printf("\n address of p = %u",&p); //owner address
    printf("\n value of p = %u",p); //copied address

    *p = 500; //p -->300 [500]
    printf("\n after change p = %d",*p);
    printf("\n after change a = %d",a);



}