#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    int fd=0;
    char fname[30];
    int icount=0;
    
    printf("Enter the file name\n");
    scanf("%s",fname);
    
    fd=open(fname,O_RDWR);
    
    if(fd==-1)
    {
        printf("Unable to open file::\n");
        return -1;
    }
    
    icount=lseek(fd,0,2);
    
    printf("FILE SIZE IS:: %d",icount);
    
    close(fd);
    
    return 0;
}
