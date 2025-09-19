/*
============================================================================
Name : Q27.c
Author : Sarthak Goyal
Description :Write a program to execute ls -Rl by the following system calls
             a. execl
             b. execlp
             c. execle
             d. execv
             e. execvp
Date: 02th sept, 2025.
============================================================================
*/
#include <stdio.h>
#include <unistd.h>
int main(int argc,char *env[])
{
    char *path = "/bin/ls";
    execl(path, path, "-Rl", NULL);
    char *path2 = "ls";
    execlp(path2, path2, "-Rl", NULL);
    execle(path, path, "-Rl" ,"27c_example/",NULL, env);
    char *argv[] = {path,"-Rl",NULL};
    execv(path, argv);
    char *buf[] = {path2, "-Rl", NULL};
    execvp(path2, buf);
    return 0;
}
/* output
-rw-r--r--  1 ronakgoyal  staff   199 Aug 23 20:14 15.c
-rwxr-xr-x  1 ronakgoyal  staff  8744 Sep  6 18:21 a.out
-rwxr-xr-x  1 ronakgoyal  staff    30 Aug 31 01:37 argc[1]
-rw-r--r--@ 1 ronakgoyal  staff   143 Aug 21 14:30 eample.c
-rw-r--r--  1 ronakgoyal  staff     0 Aug 21 14:08 example.c
-rw-r--r--@ 1 ronakgoyal  staff    13 Sep  6 18:20 file1.txt
-rw-r--r--@ 1 ronakgoyal  staff    20 Aug 21 00:22 file10.txt
-rw-r--r--  1 ronakgoyal  staff     0 Aug 20 17:52 file2.txt
-rw-r--r--  1 ronakgoyal  staff     0 Sep  6 17:49 file_0.txt
-rw-r--r--  1 ronakgoyal  staff     0 Sep  6 17:49 file_1.txt
-rw-r--r--  1 ronakgoyal  staff     0 Sep  6 17:49 file_2.txt
-rw-r--r--  1 ronakgoyal  staff     0 Sep  6 17:49 file_3.txt
-rw-r--r--  1 ronakgoyal  staff     0 Sep  6 17:49 file_4.txt
-rw-r--r--@ 1 ronakgoyal  staff    11 Sep  6 17:57 fileq7a.txt
-rw-r--r--@ 1 ronakgoyal  staff    11 Sep  6 17:58 fileq7b.txt
-rw-r--r--  1 ronakgoyal  staff    37 Sep  6 18:06 fileq8.txt
-rw-r--r--@ 1 ronakgoyal  staff     0 Aug 13 21:12 q1.txt
-rwxr-xr-x  1 ronakgoyal  staff  8696 Aug 21 00:22 q10
-rw-r--r--@ 1 ronakgoyal  staff   392 Aug 31 01:37 q10.c
-rw-r--r--@ 1 ronakgoyal  staff   393 Aug 23 20:24 q11.c
-rw-r--r--@ 1 ronakgoyal  staff   389 Aug 23 19:27 q12.c
-rw-r--r--@ 1 ronakgoyal  staff   446 Aug 23 19:51 q13.c
-rw-r--r--@ 1 ronakgoyal  staff   545 Aug 23 20:08 q14.c
-rw-r--r--@ 1 ronakgoyal  staff   189 Aug 23 20:15 q15.c
-rw-r--r--@ 1 ronakgoyal  staff   750 Sep  4 22:13 q16a.c
-rw-r--r--@ 1 ronakgoyal  staff   838 Sep  4 22:12 q16b.c
-rw-r--r--@ 1 ronakgoyal  staff   988 Sep  4 22:06 q17a.c
-rw-r--r--@ 1 ronakgoyal  staff  1424 Sep  4 22:07 q17b.c
-rw-r--r--@ 1 ronakgoyal  staff   448 Aug 28 01:22 q19.c
-rw-r--r--@ 1 ronakgoyal  staff    55 Aug 19 14:51 q2.c
-rw-r--r--@ 1 ronakgoyal  staff   660 Sep  2 12:22 q20.c
-rw-r--r--@ 1 ronakgoyal  staff   423 Sep  2 12:16 q21.c
-rw-r--r--@ 1 ronakgoyal  staff   680 Sep  6 18:10 q22.c
-rw-r--r--@ 1 ronakgoyal  staff   679 Sep  6 18:16 q23.c
-rw-r--r--@ 1 ronakgoyal  staff   663 Sep  6 18:15 q24.c
-rw-r--r--@ 1 ronakgoyal  staff   519 Sep  6 18:17 q25.c
-rw-r--r--@ 1 ronakgoyal  staff   124 Sep  6 18:20 q26.c
-rw-r--r--@ 1 ronakgoyal  staff   417 Aug 28 12:45 q27.c
-rw-r--r--@ 1 ronakgoyal  staff   555 Aug 28 15:06 q28.c
-rw-r--r--@ 1 ronakgoyal  staff  2116 Sep  2 12:14 q29.c
-rw-r--r--@ 1 ronakgoyal  staff   210 Aug 13 23:56 q3.c
-rw-r--r--@ 1 ronakgoyal  staff     0 Aug 14 14:38 q3.txt
-rw-r--r--@ 1 ronakgoyal  staff   728 Aug 31 22:03 q30.c
-rw-r--r--@ 1 ronakgoyal  staff   549 Sep  6 17:51 q4.c
-rw-r--r--@ 1 ronakgoyal  staff   536 Aug 19 14:53 q5.c
-rw-r--r--@ 1 ronakgoyal  staff   547 Sep  6 17:53 q6.c
-rw-r--r--@ 1 ronakgoyal  staff   599 Sep  6 18:01 q7.c
-rw-r--r--@ 1 ronakgoyal  staff   914 Sep  6 18:06 q8.c
-rw-r--r--@ 1 ronakgoyal  staff   857 Aug 31 22:10 q9.c
-rw-r--r--@ 1 ronakgoyal  staff    22 Aug 31 01:10 rohit.c
-rwxr-xr-x  1 ronakgoyal  staff    30 Aug 31 01:35 sihvam
-rw-r--r--  1 ronakgoyal  staff    32 Aug 23 20:23 test.txt
drwxr-xr-x  2 ronakgoyal  staff    64 Aug 31 01:12 x
*/
