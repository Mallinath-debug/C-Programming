#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    int fd=0;
    int i=0;
    char fname[30];
    int iret=0;
    char buffer[10];
    int icnt=0;
    
    printf("Enter file name\n");
    scanf("%s",fname);
    
    fd=open(fname,O_RDWR);
 
    if(fd==-1)
    {
        printf("Unable to open file\n");
        return -1;
    }
    //iret=read(fd,buffer,10);
    //printf("1.==%d",iret);
    while((iret=read(fd,buffer,10))!=0)
    {
        //printf("1.==%d",iret);
        //printf("\n buffer=%s",buffer);
        for(i=0;i<iret;i++)
        {
            if(buffer[i]>='a' && buffer[i]<='z')
            {
                icnt++;
            }
        }
    }
    
    printf("Small Letters are %d\n",icnt);
    return 0;
}
