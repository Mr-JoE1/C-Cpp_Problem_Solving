#include <stdio.h>

int main(int argc,char *argv[])
{
    int i = -1234;
    int count;

    printf("i=%u\n%n",i,&count);
    printf("count=%d\n",count);
}
