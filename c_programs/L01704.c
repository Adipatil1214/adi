#include <stdio.h>
int main(void){
    char name[100];
    char *ptrname = name;
    char *ptrend;
    int len = 0;
    int check=0;

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

    ptrend = ptrname + len - 1;

    while (ptrname<ptrend)
    {
        if (*ptrname!=*ptrend)

        {
            check = 1;
            break;
        }
        ptrname++;
        ptrend++;
    }
    if (check ==0)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
       





return 0;

}