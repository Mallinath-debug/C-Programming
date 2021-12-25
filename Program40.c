#include<stdio.h>


int CountEven(int ino)
{
    int idigit=0;
    int icnt=0;
    
    while(ino!=0)
    {
       idigit=ino%10;
        ino=ino/10;
       if((idigit%2)==0)
        {
            icnt++;
        }
        
        
    }
    return icnt++;
}
     

int main()
{
    int ivalue=0;
    int iret=0;
    
    printf("Enter the number\n");
    scanf("%d",&ivalue);
    
    iret=CountEven(ivalue);
    
    printf("%d\n",iret);
    
    return 0;
}
