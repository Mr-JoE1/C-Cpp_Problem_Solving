#include <stdlib.h>
#include <string.h>

struct flit {
    int x;
    long y;
    char name[1];
};

int main(int argc,char *argv[])
{
    struct flit *fp;
    char *n = "Porky";

    fp = malloc(sizeof(struct flit) + strlen(n));
    fp->x = 5;
    fp->y = 10;
    strcpy(fp->name,n);
}
