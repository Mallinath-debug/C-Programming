#include<stdio.h>

void NonFact(int ivalue)
{
    int icnt=0;
    int irev=0;
    
    for(icnt=1;icnt<ivalue;icnt++)
    {
        if((ivalue%icnt)!=0)
        {
            printf("%d\t",icnt);
            
        }
    }

}

int main()
{
    int ino1=0;
    int iret=0;
    
    printf("Enter the number\n");
    scanf("%d",&ino1);
    
    NonFact(ino1);
    
    return 0;
}
