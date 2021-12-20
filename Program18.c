#include<stdio.h>
#include<stdbool.h>

void Display(int ivalue1)
{
    int icnt=0;
    
    for(icnt=1;icnt<=ivalue1;icnt++)
    {
        printf("*\n",icnt);
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
