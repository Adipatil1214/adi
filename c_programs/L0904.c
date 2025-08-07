#include<stdio.h>
int main(void)
{
int arrnum[5] , i ,j,temp,count=5;
// write Aseending sorting
    printf("C| Aditya Patil \n \n");
    printf("---------------------------\n");
    printf("array disending sorting \n");
    printf("=====================\n\n");

    for( i = 0; i < 5; i++)
    {
        printf("[%d]:",i);
        scanf("%d",&arrnum[i]);
    }
    
    for ( i = 0; i < count-1; i++)
    {
        for ( j = 0; j < count-1; j++)
        {
            if (arrnum[j]>arrnum[j+1])
            {
                temp=arrnum[j];
                arrnum[j]=arrnum[j+1];
                arrnum[j+1]=temp;



            }
        }
        
    }

    printf("sorted disendeing \n\n");
  for( i = 0; i < 5; i++)
    {
        printf("[%d]: %d\n",i,arrnum[i]);

    }
       

printf("\n\n");
return 0;
}