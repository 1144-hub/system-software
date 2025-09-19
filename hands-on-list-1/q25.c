
/*
============================================================================
Name : Q25.c
Author :Sarthak Goyal
Description :Write a program to create three child processes. The parent should wait for a particular child (use
waitpid system call).
Date : 03 sept 2025
*/
#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>

int main(void){
   int i,j,k;
   
   if(!(i=fork())) sleep(10);
   
   else if(!(j=fork())){
	   sleep(8);
   }
   else if(!(k=fork())){
	   sleep(15);
   }
   else waitpid(j,NULL,0);
}
