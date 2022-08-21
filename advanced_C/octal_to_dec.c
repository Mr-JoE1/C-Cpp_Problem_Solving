 /*************************************************************************
 *  C program to convert number from octal to decimal
 * __________________
 * Created by: Mohamed Maher . 
 * Embedded System Developper.
 * Penteration system Tester.
 * LinkedIn: https://www.linkedin.com/in/mohamed-maher-37b167a5/
 * ************************************************************************/

 
#include <stdio.h>
#include <string.h>
#include <math.h>
 
int main()
{
    char oct[32]={0};
    int  dec,i;
    int  cnt;   /*for power index*/
 
    printf("Enter octal value: ");
    gets(oct);
 
    cnt=0;
    dec=0;
    for(i=(strlen(oct)-1);i>=0;i--)
    {
        dec= dec+ (oct[i]-0x30)*pow((double)8,(double)cnt);
        cnt++;
    }
 
    printf("DECIMAL value is: %d",dec);
 
    return 0;
}