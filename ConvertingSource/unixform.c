#include <stdio.h>
#include <errno.h>

void unixform(char *filename);

int main(int argc, char *argv[])
{
    int i;

    for(i=1; i<argc; i++) {
        unixform(argv[i]);
    }
}

void unixform(char *filename)
{
    char tempname[256];
    FILE *file;
    FILE *tfile;
    int character;


    sprintf(tempname,"/tmp/%s",filename);

    if((file = fopen(filename,"r")) == NULL) {
        printf("  unable to open original file for input\n");
        return;
    }
    if((tfile = fopen(tempname,"w")) == NULL) {
        printf("  unable to open temporary file for output\n");
        fclose(file);
        return;
    }
    errno = 0;
    while((character = fgetc(file)) != EOF) {
        if(character == 0x0D)
            continue;
        if(fputc(character,tfile) == EOF) {
            printf("  unable to write to temporary file\n");
            fclose(file);
            fclose(tfile);
            return;
        }
        errno = 0;
    }
    if(errno != 0) {
        printf("  error reading from original file\n");
        fclose(file);
        fclose(tfile);
        return;
    }
    fclose(file);
    fclose(tfile);

    if((tfile = fopen(tempname,"r")) == NULL) {
        printf("  unable to open temporary file for input\n");
        return;
    }
    if((file = fopen(filename,"w")) == NULL) {
        printf("  unable to open new file for output\n");
        fclose(tfile);
        return;
    }
    errno = 0;
    while((character = fgetc(tfile)) != EOF) {
        if(fputc(character,file) == EOF) {
            printf("  unable to write to new file\n");
            fclose(file);
            fclose(tfile);
            return;
        }
        errno = 0;
    }
    if(errno != 0) {
        printf("  error reading from temporary file\n");
        fclose(file);
        fclose(tfile);
        return;
    }
    fclose(file);
    fclose(tfile);
}
