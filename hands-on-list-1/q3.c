/*
============================================================================
Name : Q3_createfile.cpp
Author : Sarthak Goyal
Description : Write a program to create a file and print the file descriptor value. Use creat ( ) system call
Date: 13th Aug, 2025.
============================================================================
*/
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main(void)
{
    int a = creat("creatfile.txt", 0744);
    int fd = open("creatfile.txt", O_RDONLY);
    printf("File Descriptor is: %d\n", fd);
}
/*
File Discriptor is:4
*/