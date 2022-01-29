#include <stdio.h>


int main(int argc,char *argv[])
{
    printf("file: %s\n",__FILE__);
    printf("line: %d\n",__LINE__);
    printf("date: %s\n",__DATE__);
    printf("time: %s\n",__TIME__);
    printf("stdc: %d\n",__STDC__);
    printf("stdc hosted: %d\n",__STDC_HOSTED__);
    printf("stdc version: %d\n",__STDC_VERSION__);
    printf("func: %s\n",__func__);
}
