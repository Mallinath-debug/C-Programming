#include<stdio.h>

int SumNonFact(int ivalue)
{
    int icnt=0;
    int isum=0;
    
    for(icnt=1;icnt<ivalue;icnt++)
    {
        if((ivalue%icnt)!=0)
        {
            isum=isum+icnt;
            
        }
    }
    return isum;

}

int main()
{
    int ino1=0;
    int iret=0;
    
    printf("Enter the number\n");
    scanf("%d",&ino1);
    
    iret=SumNonFact(ino1);
    printf("%d\n",iret);
    
    return 0;
}
