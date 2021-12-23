#include<stdio.h>

int FactDiff(int ivalue)
{
    int icnt=0;
    int isum=0;
    int isum1=0;
    
    for(icnt=1;icnt<ivalue;icnt++)
    {
        if((ivalue%icnt)!=0)
        {
            isum=isum+icnt;
            
        }
        else
        {
            isum1=isum1+icnt;
        }
        
    }
    return isum-isum1;
   
}

int main()
{
    int ino1=0;
    int iret=0;
    
    printf("Enter the number\n");
    scanf("%d",&ino1);
    
    iret=FactDiff(ino1);
    printf("%d\n",iret);
    
    return 0;
}
