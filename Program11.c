#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    int fd=0;
    char fname[30];
    int iret=0;
    char Buffer[10];
    int i=0;
    printf("Enter the file name\n");
    scanf("%s",fname);
    
    fd=open(fname,O_RDWR);
    
    if(fd==-1)
    {
        printf("UNABLE TO OPEN FILE\n");
    }
    else{
        printf("File sucessfully opened with FD:%d\n",fd);
    }
    while((iret=read(fd,Buffer,10))!=0)
    {
        for(i=0; i<iret;i++)
        {
        
                printf("%c",Buffer[i]);
        
        }
        
    }
    
    return 0;
}
