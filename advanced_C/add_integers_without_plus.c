 /*************************************************************************
 * add to integrers without using plus operator
 * __________________
 * Created by: Mohamed Maher . 
 * Embedded System Developper.
 * Penteration system Tester.
 * LinkedIn: https://www.linkedin.com/in/mohamed-maher-37b167a5/
 * ************************************************************************/
#include <stdio.h>


// Using with field feature of printf function 
// print printf(“%*d”, width, num) it returns the sum of total width 
// this is method works only with integers!!!
int add(int x, int y) 
{ 
	return printf("%*c%*c", x, '\r', y, '\r'); 
} 

// Driver code 
int main() 
{ 
    int n, m;
    while(1){
    printf("Enter first number: ");
    scanf("%d", &n);
    printf("Enter second number: ");
    scanf("%d", &m);
	printf("Sum = %d \n", add(n, m)); 
    }
} 
