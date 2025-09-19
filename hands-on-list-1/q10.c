
/*
============================================================================
Name : Q10.c
Author : Sarthak Goyal
Description : Write a program to open a file with read write mode, write 10 bytes, move the file pointer by 10
              bytes (use lseek) and write again 10 bytes.
              a. check the return value of lseek
              b. open the file with od and check the empty spaces in between the data.
Date: 231h Aug, 2025.
============================================================================
*/
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
int main(int argv, char *argc[])
{
	int fd = open("argc[1]", O_RDWR | O_CREAT, 0777);
        
	char arr[] = "SARTHAKGOYAL";
	write(fd, arr, 10);
	int a = lseek(fd, 10, SEEK_CUR);
	printf("%d\n", a);
	write(fd, arr, 10);
	a= lseek(fd, 0, SEEK_CUR);
	printf("%d\n", a);
	return 0;
}
/*
20
30
*/


