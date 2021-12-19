
//To check whether the number is divisible by 5 or not

#include<stdio.h>
#include<stdbool.h>

bool Divisible(int ino)
{
    if(ino<0)
    {
        ino=ino;    //updator
    }
    
    if((ino%5)==0)
    {
        return true;
    }
    else{
        return false;
    }
}



int main()
{
    int ivalue=0;
    bool bret=0;
    
    printf("enter the number\n");
    scanf("%d",&ivalue);
    
    bret=Divisible(ivalue);
    
    if(bret==true)
    {
        printf("number is divisible\n");
    }
    else{
        printf("number is not divisible\n");
    }
    
    return 0;
}
