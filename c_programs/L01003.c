// initianized 2d array and display it
#include<stdio.h>
int main(void)
{
int i,j,rows,cols;
int arrnum[10][10];


    printf("C| Aditya Patil \n \n");
    printf("---------------------------\n");
    printf(" 2d array \n");
    printf("=====================\n\n");
    printf("no. of rows: ");
    scanf("%d",&rows);
    printf("no. of cols: ");
    scanf("%d",&cols);
    

printf("Enter your shi\n");
    for ( i = 0; i < rows; i++)
    {
        for ( j = 0; j < cols; j++)
        {
            printf("[%d][%d]: ",i,j);
            scanf("%d",&arrnum[i][j]);
        }
        printf("\n");
    }
    

    for ( i = 0; i < rows; i++)
    {printf("|");
        for ( j = 0; j < cols; j++)
        {
            printf("%3d  ", arrnum[i][j]);
        }
        printf("\b\b|");
        printf("\n");
    }
    

   
   
    



printf("\n\n");
return 0;
}