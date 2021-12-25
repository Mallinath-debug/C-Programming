#include<stdio.h>
#include<stdbool.h>

int ChkGreater(int ivalue)
{
    if(ivalue>100)
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
    
    bret=ChkGreater(ino1);
    
    if(bret==true)
    {
        printf("Greater\n");
    }
    else{
        printf("Smaller\n");
    }
    
    
    return 0;
}
