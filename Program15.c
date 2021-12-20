#include<stdio.h>

void Display(ivalue)
{
    int icnt=0;
    
    for(icnt=1;icnt<=ivalue;icnt++)
    {
        printf("MARVELLOUS\n");
    }
}

int main()
{
    int ino1=0;
    
    printf("Enter the number\n");
    scanf("%d",&ino1);
    
    Display(ino1);
    
    return 0;
}
