
/*
============================================================================
Name : Q9.c
Author : Sarthak Goyal
Description : Write a program to print the following information about a given file.
              a. inode
              b. number of hard links
              c. uid
              d. gid
              e. size
              f. block size
              g. number of blocks
              h. time of last access
              i. time of last modification
              j. time of last change
Date: 23th Aug, 2025.
============================================================================
*/
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <pwd.h>
#include <grp.h>
#include <time.h>

int main(void)
{
    const char *fname = "q1hardsystem.c";
    struct stat status;
    printf("Inode is: %llu\n", (unsigned long long)status.st_ino);
    printf("Number of hard links: %llu\n", (unsigned long long)status.st_nlink);
    printf("UID is: %u\n", (unsigned int)status.st_uid);
    printf("GID is: %u\n", (unsigned int)status.st_gid);
    printf("File size is: %lld Bytes\n", (long long)status.st_size);
    printf("Size of block is: %ld bytes\n", (long)status.st_blksize);
    printf("Number of blocks are: %lld\n", (long long)status.st_blocks);
    printf("Time of last access is: %s", ctime(&status.st_atime));
    printf("Time of last modification is: %s", ctime(&status.st_mtime));
    printf("Time of last change is: %s", ctime(&status.st_ctime));
}
/*
Inode is: 140701969760104
Number of hard links: 0
UID is: 364462017
GID is: 32760
File size is: 0 Bytes
Size of block is: -1158855424 bytes
Number of blocks are: -1594712071729708978
Time of last access is: Tue Dec  5 14:29:12     4460637
Time of last modification is: Thu Jan  1 05:41:44 1970
Time of last change is: Thu Jan  1 05:30:00 1970
*/