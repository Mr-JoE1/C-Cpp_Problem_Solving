#include <stdio.h>

int main(int argc,char *argv[])
{
    int x = 5;
    int *xptr = &x;

    printf("x=%d\n",*xptr);
    printf("x=%d\n",xptr[0]);
}
