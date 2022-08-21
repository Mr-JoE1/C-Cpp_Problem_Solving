#include <stdio.h>

struct {
    char c;
    double d;
} s;

int main(int argc,char *argv[])
{
     int a;

     a = (int)&s.d - (int)&s.c;
     printf("alignment=%d\n",a);
     printf("Size of char: %d\n",sizeof(s.c));
     printf("Size of double: %d\n",sizeof(s.d));
     printf("Size of struct: %d\n",sizeof(s));
}
