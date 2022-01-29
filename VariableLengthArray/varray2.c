#include <stdio.h>
#include <stdlib.h>

void append(int);

int *numlist = NULL;
int count = 0;
int size = 0;
int increment = 5;

int main(int argc,char *argv[])
{
    append(12);
    append(35);
}

void append(int num)
{
    int i;

    if(count >= size) {
        int newsize = size + increment;
        int *newnumlist = malloc(sizeof(int) * newsize);
        for(i=0; i<count; i++)
            newnumlist[i] = numlist[i];
        if(numlist != NULL)
            free(numlist);
        numlist = newnumlist;
        size = newsize;
    }
    numlist[count++] = num;
}
