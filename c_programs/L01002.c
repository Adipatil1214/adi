// initianized 2d array and display it
#include<stdio.h>
int main(void)
{
int i,j;
int arrnum[2][3];


    printf("C| Aditya Patil \n \n");
    printf("---------------------------\n");
    printf(" 2d array \n");
    printf("=====================\n\n");


printf("Enter your shi\n");
    for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("[%d][%d]: ",i,j);
            scanf("%d",&arrnum[i][j]);
        }
        printf("\n");
    }
    

    for ( i = 0; i < 2; i++)
    {printf("|");
        for ( j = 0; j < 3; j++)
        {
            printf("%d  ", arrnum[i][j]);

        }
        printf("\b\b|");
        printf("\n");
    }
    

   
   
    



printf("\n\n");
return 0;
}