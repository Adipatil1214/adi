#include<stdio.h>
int main(void)
{
int i;
int arrnum[5];
// to create a array of 5 elements accept them from user and display array on screen
    printf("C| Aditya Patil \n \n");
    printf("---------------------------\n");
    printf(" array accept and display \n");
    printf("=====================\n\n");
    printf("Enter the elements\n");
    for( i = 0; i < 5; i++)
    {
        printf("[%d]:",i);
        scanf("%d",&arrnum[i]);
    }
    printf("___-----------____---__--_--\n\n");


    for ( i = 0; i < 5; i++)
    {
        printf("[%d] : %d \n",i,arrnum[i]);
    }
    

   
   
    



printf("\n\n");
return 0;
}
