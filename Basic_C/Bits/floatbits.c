#include <stdio.h>

int main(int argc,char *argv[])
{
    int i;
    union {
        float value;
        unsigned char b[8];
    } u;

    u.value = 1.0;
    printf("%f = ",u.value);
    for(i=0; i<sizeof(u.value); i++)
        printf("%02X",u.b[i]);
    printf("\n");

    u.value = 2.0;
    printf("%f = ",u.value);
    for(i=0; i<sizeof(u.value); i++)
        printf("%02X",u.b[i]);
    printf("\n");

    u.value = 3.0;
    printf("%f = ",u.value);
    for(i=0; i<sizeof(u.value); i++)
        printf("%02X",u.b[i]);
    printf("\n");

    u.value = -3.0;
    printf("%f = ",u.value);
    for(i=0; i<sizeof(u.value); i++)
        printf("%02X",u.b[i]);
    printf("\n");
}
