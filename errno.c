#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>
#include<string.h>
#include<errno.h>
int main(int argc, char *argv[])
{
    fprintf(stderr, "EACCESS %s\n", strerror(EACCES));

    errno = ENOENT;
    perror(argv[0]);
    return 0;
}
