#include<stdio.h>
#include<unistd.h>

int main()
{
pid_t pid;
pid=fork();
printf("pid of child is %d and parent is %d",getpid(),getppid());
}

