/*
============================================================================
Name : Q24.c
Author :Sarthak Goyal
Description :Write a program to create an orphan process.
Date : 2 Sept 2025
*/
#include<stdio.h> 
#include <stdlib.h>
#include <sys/types.h> 
#include <unistd.h> 
int main() 
{ 
           
    int pid = fork(); 
  
    if (pid > 0) {
        printf("inside parent pid= %d\n", getpid());
        printf("child pid= %d\n", pid);
       } 
    else if (pid == 0) 
    { 
        printf("inside child pid= %d\n", getpid());
        sleep(10);
        exit(EXIT_SUCCESS);
    } 
} 
/*
inside parent pid= 7867
child pid= 7868
inside child pid= 7868
*/
