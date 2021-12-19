//If else program



#include<stdio.h>

void Display(int ino)
{
   if(ino<0)     //Input updator
    {
        ino=-ino;
    }
  if(ino<10)
    {
        printf("hello\n");
    }
    else{
        printf("Demo\n");
    }
}


int main()
{
    int ivalue=0;
    
    printf("enter the number\n");
    scanf("%d",&ivalue);
    
    Display(ivalue);
    
    return 0;
}
