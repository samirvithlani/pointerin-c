#include<stdio.h>

void main(){


    int a = 10; //304
    int *p = &a; //300

    //arithmatic operation on pointer
    printf("\n value of p = %d",*p);
    printf("\n address of p = %u",p); //owner address

    p  = p + 1; //p = p + 1 * sizeof(int)
    printf("\n address of p = %u",p); //copied address

    *p = 200; // 300
    printf("\n after change of of a = %d",a);


    printf("\n size of int = %d",sizeof(*p));


}