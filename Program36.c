#include<stdio.h>
#include<stdbool.h>

bool ChkZero(int ivalue)
{
    int idigit=0;
    
    while(ivalue!=0)
    {
        idigit=ivalue%10;
       if(idigit==0)
        {
            return true;
        }
        else{
            return false;
        }
    }
}
     

int main()
{
    int ino=0;
    bool bret=false;
    
    printf("Enter the number\n");
    scanf("%d",&ino);
    
    bret=ChkZero(ino);
    if(bret==true)
    {
        printf("It contains zero\n");
    }
    else
    {
        printf("There is no zero\n");
    }
    return 0;
}
