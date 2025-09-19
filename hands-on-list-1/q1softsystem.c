
/*
============================================================================
Name : Q1_softlink.cpp
Author : Sarthak Goyal
Description : 1. Create the following types of a files using (i) shell command (ii) system call
              a. soft link (symlink system call)
Date: 13th Aug, 2025.
============================================================================
*/
#include<unistd.h>	
#include<stdio.h>	

int main(int argc, char *argv[]){
	if(argc != 3){
		printf("Enter target and source file Name\n");
		return 0;
	}
	const char *source = argv[1];
	const char *target = argv[2];
	
	int status = link(source,target);

	if(status == -1){
		perror("Error while craeting head link\n");	
	}else{
		printf("Hard Link created successfully\n");
	}
}