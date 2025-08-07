// user array menu .
// max,min,sum,avg
#include<stdio.h>


int main(void)
{
    int i,j,choice,arrnum[5],max,min,avg,total;
    max=arrnum[0];
    min=arrnum[0];
    total=0;

    printf("Aditya patil | C \n");
    printf("-----------------------------\n\n");



    for ( i = 0; i < 5; i++)
    {
        printf("[%d]:",i);
        scanf("%d",&arrnum[i]);
    }
    
    printf("\n\nMenu:\n[1]MAX\n[2]MIN\n[3]AVARAGE\n[4]SUM\n\n");
    printf("Your choice??\n");
    scanf("%d",&choice);


    switch (choice)
    {
    case 1:
        for ( i = 0; i < 5; i++)
        {
            if (arrnum[i]>max)
            {
                max = arrnum[i];
            }
            
        }
        printf("MAX = %d",max);
        break;
    case 2:
        for ( i = 0; i < 5; i++)
        {
            if (arrnum[i]<min)
            {
                min = arrnum[i];
            }
            
        }
        printf("MIN = %d",min);
        break;
    case 3:
        for ( i = 0; i < 5; i++)
        {
            total=total+arrnum[i];
            avg = total/5;
        }
        printf("AVARAGE = %d",avg);
        break;
    case 4:
        for ( i = 0; i < 5; i++)
        {
            total=total+arrnum[i];
            
        }
        printf("TOTAl = %d",total);
        break;
     
  
    
    default:printf("incorrect choice \n ");
        break;
    }




printf("\n\n");

return 0;
}