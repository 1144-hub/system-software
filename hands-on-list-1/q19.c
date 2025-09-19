
/*
============================================================================
Name : Q19.c
Author : Sarthak Goyal
Description : Write a program to find out time taken to execute getpid system call. Use time stamp counter.
Date: 28th Aug, 2025.
*/
#include <stdio.h>
#include <unistd.h>
#include <stdint.h>

unsigned long long rdtsc(void) {
    unsigned int lo, hi;
    __asm__ __volatile__ ("rdtsc" : "=a"(lo), "=d"(hi));
    return ((unsigned long long)hi << 32) | lo;
}

int main() {
    unsigned long long start, end;

    start = rdtsc();

    printf("The process id is: %d\n", getpid());

    end = rdtsc();

    printf("Difference in CPU cycles is: %llu\n", end - start);

    return 0;
}
/*
The process id is: 8486
Difference in CPU cycles is: 62934
*/
