#include <stdio.h>



int main(void){
    int list[10];
    int i;
    int *ptrlist = list;
    int count = 5;
    printf("C| Aditya Patil \n \n");
    printf("---------------------------\n");
    printf("pointer |\n");
    printf("=====================\n\n");
    printf("enter the element\n");
    for ( i = 0; i < count; i++)
    {
        printf("%d: ",i);
        scanf("%d",ptrlist);
        ptrlist++;
    }
    printf("\n");
    ptrlist = list;
    for ( i = 0; i < count; i++)
    {
        printf("%d : %d\n",i,*ptrlist);
        ptrlist++;
    }
    

















}