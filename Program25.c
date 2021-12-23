#include<stdio.h>
#include<stdlib.h>


void DisplayConvert(char cvalue)
{
  if(cvalue>='a' && cvalue<='z')
    {
        printf("%c\n",cvalue-32);
       
    }
    else if(cvalue>='A' && cvalue<='Z')
    {
        printf("%c\n",cvalue+32);
        
    }
}

int main()
{
    char ch='\0';
    
    printf("Enter the character\n");
    scanf("%c",&ch);
    
    DisplayConvert(ch);
    
    return 0;
}
