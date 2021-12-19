///Accepting the number from the user and printing that much star on the screen



#include<stdio.h>

void Display(int ivalue)
{
    int icnt=0;
    
    for(icnt=1;icnt<=ivalue;icnt++)
    {
        printf("*\n");
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
