#include<stdio.h>
#include<stdbool.h>

int ChkEqual(int ivalue1,int ivalue2)
{
    if(ivalue1==ivalue2)
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
    int ino2=0;
    bool bret=false;
    
    printf("Enter the number\n");
    scanf("%d",&ino1);
    
    printf("Enter the second number\n");
    scanf("%d",&ino2);
    
    bret=ChkEqual(ino1,ino2);
    
    if(bret==true)
    {
        printf("Equal\n");
    }
    else{
        printf("Not Equal\n");
    }
    
    
    return 0;
}
