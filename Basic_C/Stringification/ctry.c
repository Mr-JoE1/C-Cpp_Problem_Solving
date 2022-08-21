#include <stdio.h>

#define faugh(pod) printf("%s\n",#pod)

#define concat(a,b) a ## b

int poo();

int main(int argc,char *argv[])
{
    int x;

    printf("poo back %d\n",poo(4));
    faugh(moonglow);
    concat(x,++);
}

int poo(int j)
{
    return(j * 2);
}
