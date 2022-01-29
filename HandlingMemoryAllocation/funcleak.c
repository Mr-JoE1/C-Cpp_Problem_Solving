#include <stdlib.h>
#include <string.h>

char *getstr();

int main(int argc,char *argv[])
{
    char *pt;

    pt = getstr();
}
char *getstr()
{
    char *pt;

    pt = malloc(60);
    strcpy(pt,"This is the returned string.");
    return(pt);
}
