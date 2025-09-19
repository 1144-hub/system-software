/*
============================================================================
Name : Q14.c
Author : Sarthak Goyal
Description : Write a program to find the type of a file.
              a. Input should be taken from command line.
              b. program should be able to identify any type of a file.
Date: 29th Aug, 2025.
============================================================================
*/
#include <stdio.h>
#include <sys/stat.h>

int main(int argc, char **argv){
    struct stat st;
    lstat(argv[1], &st);
    if (S_ISREG(st.st_mode)) puts("regular file");
    else if (S_ISDIR(st.st_mode)) puts("directory");
    else if (S_ISLNK(st.st_mode)) puts("symbolic link");
    else if (S_ISCHR(st.st_mode)) puts("character device");
    else if (S_ISBLK(st.st_mode)) puts("block device");
    else if (S_ISFIFO(st.st_mode)) puts("fifo/pipe");
    else if (S_ISSOCK(st.st_mode)) puts("socket");
    else puts("unknown");
    return 0;
}
/*sarthakgoyal@Administrators-MacBook-Pro handson1 %  gcc q14.c
sarthakgoyal@Administrators-MacBook-Pro handson1 % ./a.out   
unknown
sarthakgoyal@Administrators-MacBook-Pro handson1 % ./a.out temp.txt
regular file
*/


