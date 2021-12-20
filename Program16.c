#include<stdio.h>

void Display(int ivalue1)
{
    int icnt=0;
    
    for(icnt=ivalue1;icnt>0;icnt--)
    {
        printf("%d\n",icnt);
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
