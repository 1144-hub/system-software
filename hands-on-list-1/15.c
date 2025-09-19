#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("HOME = %s\n", getenv("HOME"));
    printf("PATH = %s\n", getenv("PATH"));
    printf("USER = %s\n", getenv("USER"));
    return 0;
}

