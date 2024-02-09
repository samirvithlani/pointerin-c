#include<stdio.h>

void main(){

    int a =65;
    char b = 'A';

    void *p = &a;
    if (p == NULL){
        printf("\n p is null pointer");
    }
    else{
        printf("\n p is not null pointer");
    }
    p = &b;

    printf("\n value of a = %d",*(int*)p);


}