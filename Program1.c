//Division of two numbers

#include<stdio.h>


int Divide(ino1,ino2)
{
    int idivide=0;
    
    if(ino2<0)
    {
        return -1;
    }
    idivide=ino1/ino2;
    
    return idivide;
}


int main()
{
    int ivalue1=0;
    int ivalue2=0;
    int iret=0;
    
    printf("enter the number\n");
    scanf("%d",&ivalue1);
    
    printf("Enter the second number\n");
    scanf("%d",&ivalue2);
    
    iret=Divide(ivalue1,ivalue2);
    printf("Division is %d\n",iret);
    
    return 0;
}
