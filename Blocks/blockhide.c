#include <stdio.h>

int main(int argc,char *argv[])
{
    int i;

    i = 5;
    printf("Outside top %d\n",i);
    {
        int i = 100;
        printf("Inside %d\n",i);
    }
    printf("Outside bottom %d\n",i);
}
