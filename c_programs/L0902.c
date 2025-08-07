#include<stdio.h>
int main(void)
{
int arrnum[5] , i , min,max;
// write program to accept 5 num and find its min and max 
    printf("C| Aditya Patil \n \n");
    printf("---------------------------\n");
    printf("min and max on array  \n");
    printf("=====================\n\n");

    for( i = 0; i < 5; i++)
    {
        printf("[%d]:",i);
        scanf("%d",&arrnum[i]);
    }
    max = arrnum[0];
    min = arrnum[0];
    
    for ( i = 1; i <5; i++)
    {
        if (arrnum[i]>max)
        {
            max = arrnum[i];
        }
        if (arrnum[i]<min)
        {
            min = arrnum[i];
        }
        
    }
    
    
printf("max = %d\n",max);
printf("min = %d",min);
printf("\n\n");
return 0;
}