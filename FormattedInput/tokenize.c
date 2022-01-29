#include <stdio.h>
#include <string.h>

int main(int argc,char *argv[])
{
    char str[] = "apple,pear,orange";
    char *token;

    token = strtok(str,", \n");
    while(token != NULL) {
        printf("%s\n",token);
        token = strtok(NULL,", ");
    }
}
