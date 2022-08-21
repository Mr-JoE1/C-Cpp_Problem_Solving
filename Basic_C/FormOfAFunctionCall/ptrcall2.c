#include <stdio.h>

int addem(int a,int b) {
    return(a + b);
}

int mulem(int a,int b) {
    return(a * b);
}

int main(int argc,char *argv[])
{
    int (*func)(int a,int b);
    int result;

    func = addem;
    result = func(5,10);
    printf("Calling addem: %d\n",result);

    func = mulem;
    result = func(5,10);
    printf("Calling mulem: %d\n",result);
}
