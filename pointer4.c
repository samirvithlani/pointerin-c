//char pointer
#include<stdio.h>

void main(){

    char name[6] ="Hello";
    char *b = &name;
    printf("\n address of name = %u",&name);
    printf("\n value of name = %s",name);

    printf("\n value of name = %s",b);
    



}