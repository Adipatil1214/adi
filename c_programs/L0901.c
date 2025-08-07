#include<stdio.h>
int main(void)
{
int arrnum[5] , i , avg,total;
// write to diaplay the number take total and take average 
    printf("C| Aditya Patil \n \n");
    printf("---------------------------\n");
    printf("total and avg on array  \n");
    printf("=====================\n\n");

    for( i = 0; i < 5; i++)
    {
        printf("[%d]:",i);
        scanf("%d",&arrnum[i]);
        total = total + arrnum[i];
    }
   avg = total/5;
    
printf("total = %d\n",total);
printf("Average = %d",avg);
printf("\n\n");
return 0;
}