// pass by reference
#include<stdio.h>
void exchange(int *ptra,int *ptrb);
int main(void)
{
int a,b,*ptra,*ptrb;
ptra=&a;
ptrb=&b;

    printf("C| Aditya Patil \n \n");
    printf("---------------------------\n");
    printf(" power repetative function \n");
    printf("===========================\n\n");
    
    
    
do
{
    


    printf("\nenter a: ");
    scanf("%d",&a);
    printf("enter b: ");
    scanf("%d",&b);
    printf("\n\n Bofore exchange \n");
    printf("a = %d\n",a);
    printf("b = %d\n",b);
    exchange(ptra,ptrb);
    printf("\n\n After exchange \n");
    printf("a = %d\n",a);
    printf("b = %d\n",b);
}    
 while (a !=0);
  


printf("\n\n");
return 0;
}


void exchange(int *ptra,int *ptrb)
 {
    int temp;
    temp=*ptra;
    *ptra = *ptrb;
    *ptrb= temp;
    
 }