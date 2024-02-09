//param pointer call by reference
///function return pointer
//function function pointer

#include<stdio.h>

void swap(int *a,int *b){

    printf("\n address of a in swap...= %u",a);
    printf("\n address of b in swap...= %u",b);
    printf("\n value of a in swap...= %d",*a);
    printf("\n value of b in swap...= %d",*b);

    int temp = *a;
    *a = *b;
    *b = temp;

    printf("\n value of a in swap...= %d",*a);
    printf("\n value of b in swap...= %d",*b);



}

void main(){


    int a = 10;
    int b = 20;

    printf("\n address of a in main...= %u",&a);
    printf("\n address of b in main...= %u",&b);
    printf("\n value of a in main...= %d",a);
    printf("\n value of b in main...= %d",b);

    swap(&a,&b);

    printf("\n value of a in main...= %d",a);
    printf("\n value of b in main...= %d",b);



}


