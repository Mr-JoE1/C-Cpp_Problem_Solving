#include <stdlib.h>
#include <stdio.h>

int main(int argc,char *argv[])
{
    char *pt;

    pt = realloc(NULL,100);

    pt = realloc(pt,500);

    pt = realloc(pt,0);
}
