/*
============================================================================
Name : Q6.c
Author : Sarthak Goyal
Description : Write a program to take input from STDIN and display on STDOUT. Use only read/write system calls
Date: 21th Aug, 2025.
============================================================================
*/
#include <unistd.h>
#include <stdio.h>
int main() {
    char array[512];
    int n;

    while ((n = read(0, array, sizeof(array))) > 0) {
        write(1, array, n);
    }

}
/*
Output:
Sarthak Goyal
Sarthak Goyal
*/

