#include<stdio.h>
#include<stdbool.h>

bool ChkEven(int ivalue1)
{
    if(ivalue1<0)
    {
        ivalue1=-ivalue1;
    }
    if((ivalue1%2)==0)
    {
        return true;
    }
    else{
        return false;
    }
}


int main()
{
    int ino1=0;
   bool bret=false;
    
    printf("Enter the number\n");
    scanf("%d",&ino1);
    
    bret=ChkEven(ino1);
    
    if(bret==true)
    {
        printf("IT IS A EVEN NUMBER\n");
    }
    else
    {
        printf("IT IS A ODD NUMBER\n");
    }
    return 0;
}
