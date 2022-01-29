#include <stdio.h>
#include <setjmp.h>

void middleFunc(void);
void bottomFunc(void);

jmp_buf jb;

int main(int argc,char *argv[])
{
    int a;

    a = setjmp(jb);
    if(a == 0) {
        printf("calling middle from main\n");
        middleFunc();
        printf("back into main from middle\n");
    } else {
        printf("back into main from longjmp\n");
    }
}
void middleFunc()
{
    printf("Calling bottom from middle\n");
    bottomFunc();
    printf("back into middle from bottom\n");
}
void bottomFunc()
{
    printf("calling longjmp from bottom\n");
    longjmp(jb,1);
    printf("back into bottom from longjmp\n");
}
