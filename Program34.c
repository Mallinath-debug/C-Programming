#include<stdio.h>


int Multiply(int ivalue1,int ivalue2,int ivalue3)
{
    if(ivalue1<=0 && ivalue2<=0 && ivalue3<=0)
    {
        return 1;
    }
    int imult=0;
    
    imult=ivalue1*ivalue2*ivalue3;
    
    return imult;
}

int main()
{
    int ino1=0;
    int ino2=0;
    int ino3=0;
    int iret=0;
   
    
    printf("Enter the number\n");
    scanf("%d",&ino1);
    
    printf("Enter the second number\n");
    scanf("%d",&ino2);
    
    printf("Enter the third number\n");
    scanf("%d",&ino3);
    
    iret=Multiply(ino1,ino2,ino3);
    
    printf("MULTIPLICATION OF NUMBER IS :%d\n",iret);
    
    
    return 0;
}
