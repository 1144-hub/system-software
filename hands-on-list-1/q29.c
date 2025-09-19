
/*
============================================================================
Name : q29.c
Author :Sarthak Goyal
Description :Write a program to get scheduling policy and modify the scheduling policy (SCHED_FIFO,
             SCHED_RR).
Date: 01th Aug, 2025.
============================================================================
*/
#include <stdio.h>
#include <pthread.h>
#include <sched.h>
#include <unistd.h>

int main(void)
{
    pthread_t self = pthread_self();
    int policy;
    struct sched_param parameter;

    pthread_getschedparam(self, &policy, &parameter);
    printf("Current scheduling policy is %d\n", policy);

    printf("Setting new scheduling policy to SCHED_FIFO...\n");
    parameter.sched_priority = 1;
    pthread_setschedparam(self, SCHED_FIFO, &parameter);
    pthread_getschedparam(self, &policy, &parameter);
    printf("Current scheduling policy is %d\n", policy);

    printf("Switching to SCHED_RR...\n");
    parameter.sched_priority = 1;
    pthread_setschedparam(self, SCHED_RR, &parameter);
    pthread_getschedparam(self, &policy, &parameter);
    printf("Current scheduling policy is %d\n", policy);

    return 0;
}
/*
Current scheduling policy is 1
Setting new scheduling policy to SCHED_FIFO...
Current scheduling policy is 4
Switching to SCHED_RR...
Current scheduling policy is 2
*/