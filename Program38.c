#include<stdio.h>


int CountTwo(int ivalue)
{
    int idigit=1;
    int icnt=0;
    
    while(ivalue!=0)
    {
       idigit=ivalue%10;
        ivalue=ivalue/10;
       if(idigit==4)
        {
            icnt++;
        }
        
        
    }
    return icnt++;
}
     

int main()
{
    int ino=0;
    int iret=0;
    
    printf("Enter the number\n");
    scanf("%d",&ino);
    
    iret=CountTwo(ino);
    
    printf("%d\n",iret);
    
    return 0;
}
