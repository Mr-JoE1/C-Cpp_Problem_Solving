#include <stdio.h>

int main(int argc,char *argv[])
{
    int a;
    unsigned int b;

    a = 0xFFFFFFFF;
    b = 0xFFFFFFFF;

    printf("a=%d b=%u\n",a,b);
    a <<= 2;
    b <<= 2;
    printf("a=%d b=%u\n",a,b);
}
