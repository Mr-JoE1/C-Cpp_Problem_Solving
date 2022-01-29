#include <stdio.h>
#include <inttypes.h>
/*
 * Swap two variables values without using extra variable ! 
 */
int main(int argc,char *argv[])
{
    int8_t a;
    int8_t b;

    a = 13;  // 0000 1101
    b = -20; // 1001 0100

    printf("a=%d b=%d\n",a,b);
    a ^= b; // a = 1001 1001
    b ^= a; // b = 0000 1101
    a ^= b; // a = 1001 0100
    printf("a=%d b=%d\n",a,b);
}
