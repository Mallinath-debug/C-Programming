#include<stdio.h>

void Reverse(int ino)
{
    int idigit=0;
    if(ino<0)
    {
        ino=-ino;
    }
    while(ino!=0)
    {
        idigit=ino%10;
        printf("%d\n",idigit);
        ino=ino/10;
    }
}

int main()
{
    int ivalue=0;
    
    printf("enter the number\n");
    scanf("%d",&ivalue);
    
    Reverse(ivalue);
    
    return 0;
}
