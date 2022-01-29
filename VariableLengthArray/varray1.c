#include <stdio.h>

void showsize(int);
/*
 * Create variable length array using "Dynamic allocated array"
 * Means :  array is constructed using a function 
 */
int main(int argc,char *argv[])
{
    showsize(5);
    //showsize(20);
}

void showsize(int count)
{
    int ia[count];

    printf("\n");
    printf("value of count: %d\n",count);
    printf("size of array: %d\n",sizeof(ia));
    printf("number of array members: %d\n",sizeof(ia) / sizeof(int));    
}
