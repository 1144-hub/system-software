
/*
============================================================================
Name : Q1fifosystem.c
Author : Sarthak Goyal
Description : 1. Create the following types of a files using (i) shell command (ii) system call
              c. FIFO (mkfifo Library Function or mknod system call)
Date: 13th Aug, 2024.
============================================================================
*/
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>

int main(void)
{
    int i = mkfifo("Q1_fifofile", 0744);
    printf("%d\n", i);
}
/*
0
*/
