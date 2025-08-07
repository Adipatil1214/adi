// pass by reference
#include<stdio.h>
struct book
{
    char title[100];
    char author[100];
    float price;
};

int main(void)
{
    int i,j,count=5;
    struct book list[5];
    struct book temp;
    printf("C| Aditya Patil \n \n");
    printf("---------------------------\n");
    printf(" Stucture \n");
    printf("===========================\n\n");

    


for ( i = 0; i < count; i++)
{
    
    printf("title |");
    scanf("%s",&list[i].title);
    printf("Author|");
    scanf("%s",&list[i].author);
    printf("price |");
    scanf("%f",&list[i].price);
    
}



for ( i = 0; i < count-1; i++)
{
    for ( j = 0; j < count-1; j++)
    {
        if (list[j].price>list[j+1].price)
        {
            temp=list[j];
            list[j]=list[j+1];
            list[j+1]=temp;

        }
        


    }
    
}



    
    printf("--------------------------------\n");
    printf("title      Author   price\n");
    printf("--------------------------------\n");
    for ( i = 0; i < count; i++)
    {
    
            printf("%-11s",list[i].title);
            printf("%-11s",list[i].author);
            printf("%.2f\n",list[i].price);
    
        
        
        
    }
    







 
printf("\n\n");
return 0;
}
