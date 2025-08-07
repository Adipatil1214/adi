#include <stdio.h>
int main(void){
    char name[100];
    char *ptrname = name;
    int len = 0;
    printf("C| Aditya Patil \n \n");
    printf("---------------------------\n");
    printf("pointer |\n");
    printf("=====================\n\n");
    printf("name |");
    while (1)
    {
        scanf("%c", ptrname);
        if (*ptrname == '\n')
        {
            *ptrname = '\0';
            break;
        }
        ptrname++;
        len++;
    }
    ptrname = name;
    printf("RESULT | %s\n",ptrname);
    printf("length | %d\n",len);
return 0;

}