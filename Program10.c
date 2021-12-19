#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>


int main()
{
    int fd=0;
    char fname[30];
    
    printf("Enter the file name\n");
    scanf("%s",fname);
    
    fd=creat(fname,0777);
    
    if(fd==-1)
    {
        printf("Unable to create the file\n");
    }
    else{
        printf("File is created succesfully created\n");
    }
    return 0;
}
