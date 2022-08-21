#include <stdio.h>
#include <stdarg.h>

void intlist(char *tag,...);

int main(int argc,char *argv[])
{
    intlist("two:",54,31,0);
    intlist("four:",23,89,72,17,0);
}
void intlist(char *str,...)
{
    va_list ap;
    int arg;

    printf("%s ",str);
    va_start(ap,str);
    while(arg = va_arg(ap,int))
        printf("%d ",arg);
    va_end(ap);
    printf("\n");
}
