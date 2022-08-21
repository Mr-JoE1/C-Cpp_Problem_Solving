#include <stdlib.h>

int main(int argc,char *argv[])
{
    struct brig {
        int x;
        long y;
    };
    struct brig *pt;

    pt = calloc(50,sizeof(struct brig));
}
