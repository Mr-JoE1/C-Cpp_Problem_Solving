#include <stdio.h>

char c;
double d;

int main(int argc,char *argv[])
{
     int a;

     a = (int)&d - (int)&c;
     printf("alignment=%d\n",a);
}
