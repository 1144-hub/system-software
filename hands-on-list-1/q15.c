/*
============================================================================
Name : Q15.c
Author : Sarthak Goyal
Description : Write a program to display the environmental variable of the user (use environ).
Date: 27th Aug, 2025.
============================================================================
*/
#include <stdio.h>
#include <unistd.h>

extern char **environ;

int main()
{
    char **a = environ;
    while(*a != NULL){
    printf("%s\n", *a);
    a++;
    }
}
/*
ronakgoyal@Administrators-MacBook-Pro handson1 % ./a.out
__CFBundleIdentifier=com.apple.Terminal
TMPDIR=/var/folders/gx/cdd9jyfs7l130d67b6s7btrw0000gp/T/
XPC_FLAGS=0x0
LaunchInstanceID=717EB8F5-DE62-4A35-8825-B552EC1AC0D8
TERM=xterm-256color
SSH_AUTH_SOCK=/private/tmp/com.apple.launchd.1hs0kgpytL/Listeners
SECURITYSESSIONID=186a1
XPC_SERVICE_NAME=0
TERM_PROGRAM=Apple_Terminal
TERM_PROGRAM_VERSION=453
TERM_SESSION_ID=7CCAFB98-B904-4D18-8B1B-D3D850AE82C4
SHELL=/bin/zsh
HOME=/Users/ronakgoyal
LOGNAME=ronakgoyal
USER=ronakgoyal
PATH=/Users/ronakgoyal/.sdkman/candidates/kotlin/current/bin:/Library/Java/JavaVirtualMachines/jdk-24.jdk/Contents/Home/bin:/Library/Java/JavaVirtualMachines/jdk-24.jdk/Contents/Home/bin:/Library/Frameworks/Python.framework/Versions/3.13/bin:/usr/local/bin:/usr/local/sbin:/System/Cryptexes/App/usr/bin:/usr/bin:/bin:/usr/sbin:/sbin:/var/run/com.apple.security.cryptexd/codex.system/bootstrap/usr/local/bin:/var/run/com.apple.security.cryptexd/codex.system/bootstrap/usr/bin:/var/run/com.apple.security.cryptexd/codex.system/bootstrap/usr/appleinternal/bin
SHLVL=1
PWD=/Users/ronakgoyal/documents/handson1
OLDPWD=/Users/ronakgoyal/documents
HOMEBREW_PREFIX=/usr/local
HOMEBREW_CELLAR=/usr/local/Cellar
HOMEBREW_REPOSITORY=/usr/local/Homebrew
INFOPATH=/usr/local/share/info:
JAVA_HOME=/Library/Java/JavaVirtualMachines/jdk-24.jdk/Contents/Home
SDKMAN_DIR=/Users/ronakgoyal/.sdkman
SDKMAN_CANDIDATES_API=https://api.sdkman.io/2
SDKMAN_PLATFORM=darwinx64
SDKMAN_CANDIDATES_DIR=/Users/ronakgoyal/.sdkman/candidates
KOTLIN_HOME=/Users/ronakgoyal/.sdkman/candidates/kotlin/current
LC_CTYPE=UTF-8
_=/Users/ronakgoyal/documents/handson1/./a.out
*/

