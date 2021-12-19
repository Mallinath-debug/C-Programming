#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main()
{
    int fd=0;
    
    fd=creat("Demo.txt",0777);
    
    if(fd==-1)
    {
        printf("Unable to locate the file");
    }
    else{
        printf("file succesfully created\n");
    }
    
    return 0;
}
