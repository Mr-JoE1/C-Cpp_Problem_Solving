#include <stdio.h>

void func(void);

int main(int argc,char *argv[])
{
     func();
     func();
}
void func()
{
    static int a = 5;

    printf("a=%d\n",a);
    a *= 2;
}
