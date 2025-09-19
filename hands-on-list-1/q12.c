
/*
============================================================================
Name : Q12.c
Author : Sarthak Goyal
Description : Write a program to find out the opening mode of a file. Use fcntl.
Date: 29th Aug, 2025.
*/
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
int main()
{
    int fd = open("out.txt", O_RDWR);

    int fmode = fcntl(fd, F_GETFL);
    printf("%d\n", fmode);
    int accessMode = fmode & O_ACCMODE;
    printf("%d\n", accessMode);
    switch (accessMode)
    {
    case O_RDWR:
        printf("File is of read and write mode");
        break;
    case O_WRONLY:
        printf("File is of write only mode");
        break;
    case O_RDONLY:
        printf("File is of read only mode");
        break;
    default:
        break;
    }
}
/*
2
2
File is of read and write mode%      */