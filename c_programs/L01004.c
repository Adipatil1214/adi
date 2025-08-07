// initianized 2d array and display it
#include<stdio.h>
int main(void)
{
int i,j,rows,cols;
int arrnum1[10][10];
int arrnum2[10][10];
int arrnum3[10][10];


    printf("C| Aditya Patil \n \n");
    printf("---------------------------\n");
    printf(" addition of 2 matrix \n");
    printf("=====================\n\n");
    printf("no. of rows: ");
    scanf("%d",&rows);
    printf("no. of cols: ");
    scanf("%d",&cols);
    

printf("Enter your shi\n");
printf("matirxs A elements.......\n");   
    for ( i = 0; i < rows; i++)
    {
        for ( j = 0; j < cols; j++)
        {
            printf("[%d][%d]: ",i,j);
            scanf("%d",&arrnum1[i][j]);
        }
        printf("\n");
    }
    printf("matirxs B elements..........\n");   
     for ( i = 0; i < rows; i++)
    {
        for ( j = 0; j < cols; j++)
        {
            printf("[%d][%d]: ",i,j);
            scanf("%d",&arrnum2[i][j]);
        }
        printf("\n");
    }
    for ( i = 0; i < rows; i++)
    {
        for ( j = 0; j < rows; j++)
        {
            arrnum3[i][j] = arrnum1[i][j] + arrnum2[i][j];
        }
        
    }
    


















printf("matirxs\n");    
printf("matirxs A \n");   
    for ( i = 0; i < rows; i++)
    {printf("|");
        for ( j = 0; j < cols; j++)
        {
            printf("%3d  ", arrnum1[i][j]);
        }
        printf("\b\b|");
        printf("\n");
    }
    printf("matirxs B\n");   
    for ( i = 0; i < rows; i++)
    {printf("|");
        for ( j = 0; j < cols; j++)
        {
            printf("%3d  ", arrnum2[i][j]);
        }
        printf("\b\b|");
        printf("\n");
    }

   printf("matirxs C \n");   
   for ( i = 0; i < rows; i++)
    {printf("|");
        for ( j = 0; j < cols; j++)
        {
            printf("%3d  ", arrnum3[i][j]);
        }
        printf("\b\b|");
        printf("\n");
    }
    



printf("\n\n");
return 0;
}