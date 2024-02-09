#include<stdio.h>

void main(){

//300 +1*4 = 304
    int a[5]={10,20,30,40,50};
    
    int *b = &a;
    //*b = 300;
    //300
    //10-->304
    //20-->308
    //30-->312
    //40-->316
    //50-->320

    printf("\n address of a = %u",&a);

    for(int i=0;i<5;i++){

        //printf("\n value of a =%d and address of a = %u",a[i],&a[i]);
        //

    }






}