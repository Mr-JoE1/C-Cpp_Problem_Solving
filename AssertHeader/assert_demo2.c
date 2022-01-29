#include <assert.h>

int main(int argc,char *argv[]) {
    int x = 0;
#ifdef DEBUG
    assert(x < 10 && x != 0);
#endif
    return(0);
}
