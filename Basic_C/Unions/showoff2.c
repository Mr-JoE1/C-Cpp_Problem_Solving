#include <stdio.h>

struct {
    char filler;
    double field;
} sblock;

int main(int argc,char *argv[])
{
    printf("double alignment: %d\n",(int)(&sblock.field) - (int)(&sblock));
}
