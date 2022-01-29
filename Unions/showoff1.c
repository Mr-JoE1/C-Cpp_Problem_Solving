#include <stdio.h>

struct {
    double x;
    int y;
    short z;
} sblock;

union {
    double x;
    int y;
    short z;
} ublock;

int main(int argc,char *argv[])
{
    printf("...struct offsets...\n");
    printf("sblock.x: %d\n",(int)(&sblock.x) - (int)(&sblock));
    printf("sblock.y: %d\n",(int)(&sblock.y) - (int)(&sblock));
    printf("sblock.z: %d\n",(int)(&sblock.z) - (int)(&sblock));
    printf("...union offsets...\n");
    printf("ublock.x: %d\n",(int)(&ublock.x) - (int)(&ublock));
    printf("ublock.y: %d\n",(int)(&ublock.y) - (int)(&ublock));
    printf("ublock.z: %d\n",(int)(&ublock.z) - (int)(&ublock));
}
