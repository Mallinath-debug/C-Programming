#include<stdio.h>



int Divide(int ivalue1,int ivalue2)
{
    int idivide=0;
    if(ivalue2<0)
    {
        return -1;
    }
    
    idivide=ivalue1/ivalue2;
    
    return idivide;
}


int main()
{
    int ino1=0;
    int ino2=0;
    int iret=0;
 
    printf("Enter the fisrt number\n");
    scanf("%d",&ino1);
    
    printf("Enter the second number\n");
    scanf("%d",&ino2);
    
    iret=Divide(ino1,ino2);
    printf("Answer is %d\n",iret);
    
    return 0;
}
