
/*
============================================================================
Name : q1hardsystem.c
Author : Sarthak Goyal
Description : 1. Create the following types of a files using (i) shell command (ii) system call
                 b)Hardlink(Using link system call)
Date: 13th Aug, 2025.
============================================================================
*/
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>

int main(void)
{
    int fd = open("Q1_hardlink", O_CREAT | O_WRONLY, 0644);
    close(fd);

    int r = link("Q1_hardlink", "link");
    printf("%d\n", r);
}
