//malloc and calloc are used to allocate memory dynamically.
#include<stdio.h>
#include<stdlib.h>

int main(){


    char *ptr; //dynamic array
    int n,i;

    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("The number of elements is: %d\n",n);

    //5
    //  =             5*4 = 20 bytes
    ptr = (char*)malloc(n*sizeof(char));
    if(ptr==NULL){
        printf("Memory not allocated\n");
        exit(0);
    }
    else{
        printf("Memory successfully allocated using malloc\n");

        for(int i=0;i<n;i++){
            ptr[i] = "a";
        }

        printf("The elements of the array are: ");
        printf("\n");
        for(int i=0;i<n;i++){
            printf("%d\n",ptr[i]);
        }
        
    }



}