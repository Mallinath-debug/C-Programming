#include<stdio.h>

void Display(int ivalue1)
{
    if(ivalue1<10)
    {
        printf("hello\n");
    }
    else{
        printf("Demo\n");
    }
}

int main()
{
    int ino1=0;
    
    printf("enter the number\n");
    scanf("%d",&ino1);
    
    Display(ino1);
    
    return 0;
}
