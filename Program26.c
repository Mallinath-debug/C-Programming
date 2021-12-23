#include<stdio.h>

int MultFact(int ivalue)
{
    int icnt=0;
    int imult=1;
 
    
    for(icnt=1;icnt<ivalue;icnt++)
    {
        if((ivalue%icnt)==0)
        {
     
            imult=imult*icnt;
        }
    }
    return imult;
}


int main()
{
    int ino1=0;
    int iret=0;
    
    printf("Enter the number\n");
    scanf("%d",&ino1);
    
    iret=MultFact(ino1);
    printf("%d\n",iret);
    
    return 0;
}
