#include<stdio.h>


void Display(int ivalue1,int ivalue2)
{
    if(ivalue1<0)
    {
        ivalue1=-ivalue1;
    }
    int icnt=0;
    
    for(icnt=0;icnt<ivalue2;icnt++)
    {
        printf("%d\t",ivalue1);
    }
}

int main()
{
    int ino1=0;
    int ino2=0;
    
    printf("Enter the frequency\n");
    scanf("%d",&ino1);
    
    printf("Enter the frequency\n");
    scanf("%d",&ino2);
    
    Display(ino1,ino2);
    
    return 0;
}
