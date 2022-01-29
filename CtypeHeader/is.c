#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

void showCharacters();
void promptMode();
int isWhatever();

int selection = '0';

char *stick1[] = {
    " NUL","SOH","STX","ETX","EOT","ENQ","ACK","BEL",
    "BS ","TAB","LF ","VT ","FF ","CR ","SO ","SI "
};
char *stick2[] = {
    " DLE","DC1","DC2","DC3","DC4","NAK","SND","ETB",
    "CAN","EN ","SUB","ESC","FS ","GS ","RS ","US "
};
int main(int argc, char *argv[])
{
    while(1) {
        showCharacters();
        promptMode();
    }
    return(0);
}
void showCharacters()
{
    int i;
    int ch;
    int stick = 0;

    for(i=0; i<16; i++)
        printf("\n");
    printf("  ");
    for(i=0; i<16; i++)
        printf("   %X",i);
    for(ch=0; ch<128; ch++) {
        if((ch % 16) == 0)
            printf("\n %X",stick++);
        if(isWhatever(ch)) {
            if(ch < 16)
                printf(" %s",stick1[ch]);
            else if(ch < 32)
                printf(" %s",stick2[ch - 16]);
            else if(ch == 127)
                printf("  DEL");
            else if(isgraph(ch))
                printf("   %c",ch);
            else
                printf("    ");
        } else {
            printf("    ");
        }
    }
    printf("\n");
}
void promptMode()
{
    printf("      0 all      3 iscntrl  6 islower   9 isspace\n");
    printf("      1 isalnum  4 isdigit  7 isprint   a isupper\n");
    printf("      2 isalpha  5 isgraph  8 ispunct   b isxdigit\n");
    printf("                 (q=quit)>");
    selection = getchar();
    getchar();
    selection = tolower(selection);
    if(selection == 'q')
        exit('\0');
}

int isWhatever(int ch) {
    switch(selection) {
    case '1':
        return(isalnum(ch));
    case '2':
        return(isalpha(ch));
    case '3':
        return(iscntrl(ch));
    case '4':
        return(isdigit(ch));
    case '5':
        return(isgraph(ch));
    case '6':
        return(islower(ch));
    case '7':
        return(isprint(ch));
    case '8':
        return(ispunct(ch));
    case '9':
        return(isspace(ch));
    case 'a':
        return(isupper(ch));
    case 'b':
        return(isxdigit(ch));
    }
    return(1);
}
