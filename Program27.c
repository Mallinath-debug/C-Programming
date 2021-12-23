#include<stdio.h>

void FactRev(int ivalue)
{
    int icnt=0;
    int irev=0;
    
    for(icnt=ivalue;icnt>0;icnt--)
    {
        if((ivalue%icnt)==0)
        {
            printf("%d\n",icnt);
            
        }
    }

}

int main()
{
    int ino1=0;
    int iret=0;
    
    printf("Enter the number\n");
    scanf("%d",&ino1);
    
   FactRev(ino1);
   // printf("%d\n",iret);
    
    return 0;
}
