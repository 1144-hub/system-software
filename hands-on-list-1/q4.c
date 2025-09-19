
/*
============================================================================
Name :  q4.c
Author :Sarthak Goyal
Description : Write a program to open an existing file with read write mode. Try O_EXCL flag also.
Date: 14th Aug, 2024.
============================================================================
*/
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main(void)
{
    int a = open("Newfile.txt", O_CREAT | O_EXCL|O_RDWR, 0666);
    printf("%d\n", a);
    return 0;
}

/*
Output: 3
*/