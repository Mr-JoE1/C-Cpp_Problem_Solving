#include <stdio.h>

int half(int *x);

int main(int argc,char *argv[])
{
    int originalValue;
    int newValue;

    originalValue = 100;

    printf("Original: %d\n",originalValue);
    newValue = half(&originalValue);
    printf("New: %d\n",newValue);
    printf("Original: %d\n",originalValue);
}

int half(int *x)
{
    *x /= 2;
    return(*x);
}
