#include<stdio.h>

void fun(int a){

    printf("\n Inside fun a = %d",a);
}

void fun2(int x){
    
        printf("\n Inside fun2 x = %d",x);
}

float average(float a,float b){

    return (a+b)/2;
}

void main(){


    void (*p)(int) = &fun;
    void (*q)(int) = &fun2;
    float (*r)(float,float) = &average; //prototype of function should match with the function pointer
    p(100);
    q(200);

    printf("\n average = %f",r(10,20));



}