//Null Pointer in C
#include<stdio.h>



void main(){

    int a = 10;
    int *p = &a;
    //int *p = NULL;
    if(p ==NULL){
        printf("\n p is null pointer");
    }
    else{
        printf("\n p is not null pointer");
    }
    
}