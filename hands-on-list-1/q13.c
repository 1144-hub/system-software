
/*
============================================================================
Name : Q13.c
Author :Sarthak Goyal
Description : Write a program to wait for a STDIN for 10 seconds using select. Write a proper print statement to
              verify whether the data is available within 10 seconds or not (check in $man 2 select)
Date: 28th Aug, 2025.
============================================================================
*/
#include <stdio.h>
#include <unistd.h>
#include <sys/time.h>
#include <sys/types.h>

int main() {
    fd_set set;
    struct timeval t;

    FD_ZERO(&set);
    FD_SET(0, &set);         

    t.tv_sec = 10;  
    t.tv_usec = 0;

    printf("press key within time interval \n");

    if (select(1, &set, NULL, NULL, &t) > 0)
        printf("Data is available on stdin!\n");
    else
        printf("No data within 10 seconds.\n");

    return 0;
}
/*
press key within time interval 
d
Data is available on stdin!
ronakgoyal@Administrators-MacBook-Pro handson1 % d
zsh: command not found: d
ronakgoyal@Administrators-MacBook-Pro handson1 % ./a.out
press key within time interval 
No data within 10 seconds.
*/
