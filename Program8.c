//Accept two numbers from user and display first number in second number of times
//Example::  12   5
//Output::12  12   12   12    12

#include<stdio.h>

void ChkNumber(int ino1,int ino2)
{
    int icnt=0;
    
    for(icnt=0;icnt<ino2;icnt++)
    {
        printf("%d\n",ino1);
    }
}

int main()
{
    int ivalue1=0;
    int ivalue2=0;
    
    printf("enter the number\n");
    scanf("%d",&ivalue1);
    
    printf("enter the second number\n");
    scanf("%d",&ivalue2);
    
    ChkNumber(ivalue1,ivalue2);
    return 0;
}
