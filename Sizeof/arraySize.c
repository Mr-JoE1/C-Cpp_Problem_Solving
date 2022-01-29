#include <stdio.h>

struct sarr {
    int number;
    char *name;
} arr[] = {
  { 34, "fred" },
  { 12, "harvey" },
  { 77, "willie" }
};

int main(int argc,char *argv[])
{
    printf("Size of struct: %d\n",sizeof(struct sarr));
    printf("Size of array: %d\n",sizeof(arr));
    printf("Size of array member: %d\n",sizeof(arr[1]));
    printf("Array member count: %d\n",sizeof(arr)/sizeof(struct sarr));
}
