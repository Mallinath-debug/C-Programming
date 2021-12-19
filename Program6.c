///Accepting the number from user and printing that much star ont he screen



#include<stdio.h>

void Display(int ino)
{
    int icnt=0;
    
    
    if(ino<0)        //Input Updator
    {
        ino=-ino;
    }
    
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
