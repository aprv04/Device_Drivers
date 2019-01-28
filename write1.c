#include<stdio.h>
#include<fcntl.h>
#define SIZE 20

int main()
{

        int fd,ret;
        char buf[SIZE]="Hello World\n";

        fd=open("/dev/test1",O_RDWR);
        if(fd<0)
        {
                perror("Error operation\n");
        return -1;
        }

       ret =  write(fd,buf,sizeof(buf));

        if(ret > sizeof(buf))
                printf("Error writing to device\n");

        else
                printf("Successfully written\n");
        return 0;
}





