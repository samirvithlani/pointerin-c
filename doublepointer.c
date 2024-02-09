#include<stdio.h>

void main(){

    int a = 10;
    int *p = &a;
    int **q = &p;

    printf("\n value of a = %d",a);
    printf("\n address of a = %u",&a);

    printf("\n value of a = %d",*p);
    printf("\n address of a = %u",p);

    printf("\n value of a = %d",**q);
    printf("\n address of a = %u",*q);

    //change in q
    **q = 200;
    printf("\n value of a = %d",a);





}