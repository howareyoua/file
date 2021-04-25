#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <string.h>

#define LENGTH 100

void  main()
{
    FILE *fd;
    char str[LENGTH];


    fd = fopen ("hello.txt","w+");

    if (fd){
        fputs("Hello World", fd);
        fclose(fd);
    }

    fd = fopen("hello.txt", "r");
    fgets(str, LENGTH, fd);
    printf("%s\n",str);
    fclose(fd);
}