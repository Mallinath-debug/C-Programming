#include<stdio.h>
#include<stdbool.h>

bool Divisible(int ivalue1)
{
 if((ivalue1%5)==0)
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
    
    bret=Divisible(ino1);
    
    if(bret==true)
    {
        printf("Number is divisible by 5\n");
    }
    else
    {
        printf("Number is not divisible by 5\n");
    }
}
