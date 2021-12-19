//To print Marvellous On screen by taking the number from the user


#include<stdio.h>

void Display(int ino)
{
    int icnt=0;
    
    for(icnt=1;icnt<=ino;icnt++)
    {
        printf("Marvellous\n");
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
