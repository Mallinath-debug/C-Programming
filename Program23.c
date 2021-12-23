#include<stdio.h>

void Display(int ivalue1)
{
    int icnt=0;
    
    if(ivalue1<=0)
    {
        ivalue1=-ivalue1;
    }
    for(icnt=1;icnt<ivalue1;icnt++)
    {
        
        if((ivalue1%icnt)==0 && ((icnt%2)==0))
        {
            printf("%d\n",icnt);
        }
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
