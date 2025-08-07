// pass by reference
#include<stdio.h>
struct student
{
    char name[100];
    int age;
    float percentage;
};

int main(void)
{
    int i,j,count;
    struct student list[10];
    struct student temp;
    printf("C| Aditya Patil \n \n");
    printf("---------------------------\n");
    printf(" Stucture \n");
    printf("===========================\n\n");

    printf("enter number of stdent: ");
    scanf("%d",&count);


for ( i = 0; i < count; i++)
{
    
    printf("student  name |");
    scanf("%s",&list[i].name);
    printf("age           :");
    scanf("%d",&list[i].age);
    printf("percentae     |");
    scanf("%f",&list[i].percentage);
    
}


for ( i = 0; i < count-1; i++)
{
    for ( j = 0; j < count-1; j++)
    {
        if (list[j].percentage<list[j+1].percentage)
        {
            temp=list[j];
            list[j+1]=l
        }
        


    }
    
}


    
    printf("--------------------------------\n");
    printf("Name            Age   percentage\n");
    printf("--------------------------------\n");
    for ( i = 0; i < count; i++)
    {
        if (list[i].percentage>90)
        {
            printf("%-15s",list[i].name);
            printf("%4d   ",list[i].age);
            printf("%.2f\n",list[i].percentage);
    
        }
        
        
    }
    







 
printf("\n\n");
return 0;
}
