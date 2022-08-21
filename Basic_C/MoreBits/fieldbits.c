#include <stdio.h>

int main(int argc,char *argv[])
{
    struct {
        int x;
        int single : 1;
        int triple: 3;
        unsigned int two : 2;
        int : 6;
        _Bool flag : 1;
    } bitset;

    bitset.triple =2;

    printf("value of triple: %d\n",bitset.triple);
    printf("size of bitset: %d\n",sizeof(bitset));
}
