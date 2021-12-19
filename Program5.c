///Program to print numbers in reverse order



#include<stdio.h>

void Display(int ivalue)
{
    int icnt=0;
    
    while(ivalue>=icnt)
    {
        printf("%d\n",ivalue);
        ivalue--;
    }
}


int main()
{
    int ivalue=0;
    
    printf("enter the number\n");
    scanf("%d",&ivalue);
    
    Display(ivalue);
    
    return 0;
}
