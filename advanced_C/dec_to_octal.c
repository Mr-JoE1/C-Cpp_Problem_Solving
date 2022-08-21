 /*************************************************************************
 *  C program to convert number from decimal to octal
 * __________________
 * Created by: Mohamed Maher . 
 * Embedded System Developper.
 * Penteration system Tester.
 * LinkedIn: https://www.linkedin.com/in/mohamed-maher-37b167a5/
 * ************************************************************************/


 
#include <stdio.h>
 
int main()
{
    int     number,cnt,i;
    int     oct[32];
 
    printf("Enter decimal number: ");
    scanf("%d",&number);
 
     
    cnt=0;              /*initialize index to zero*/
    while(number>0)
    {
        oct[cnt]=number%8;
        number=number/8;
        cnt++;
    }
 
    /*print value in reverse order*/
    printf("Octal value is: ");
    for(i=(cnt-1); i>=0;i--)
        printf("%d",oct[i]);
 
    return 0;
}