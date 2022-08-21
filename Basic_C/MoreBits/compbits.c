#include <stdio.h>
/*
 * Change integer sign using complement(~) and add 1 to it 
 */

int main(int argc,char *argv[])
{
    int value;

    value = 852;
    printf("original value: %d\n",value);
    value = ~value;
    printf("after one's compliment: %d\n",value);
    value++;
    printf("after adding one: %d\n",value);
    value = ~value;
    printf("after one's compliment: %d\n",value);
    value++;
    printf("after adding one: %d\n",value);
}
