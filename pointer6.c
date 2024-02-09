#include<stdio.h>


int* fun(){

    static int a =100;

    return &a;
}

void  main(){


    int *p;
    p = fun();
    
    printf("\n value of ans = %d",*p);


}