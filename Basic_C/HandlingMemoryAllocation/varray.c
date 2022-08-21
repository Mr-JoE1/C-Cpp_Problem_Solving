#include <stdlib.h>
#include <stdio.h>

int *arr = NULL;
int size = 0;
int count = 0;
int delta = 5;
int i = 0 ; 
// function to add new element to array in run time 
void add(int m)
{
    if(size <= count) {
        size += delta;
        arr = realloc(arr,size);
       // printf("element added ! \n");
    }
    arr[count++] = m;
}

int main(int argc,char *argv[])
{
    int i, r, input;
    while (r != EOF)
    {
        printf("Enter new integer to arry ! \n"); 
        r = scanf("%d", &input);
        if (r == 1){
            add(input); 
            // print the final state of array 
            for(i=0; i<count; i++)
                printf("%d ",arr[i]);
            printf("\n");
        }
        if(r == 0 ){
            printf("Input ERROR !");
            free(arr); 
            break; 
        }
    }
    free(arr); 
    return 0 ; 

}