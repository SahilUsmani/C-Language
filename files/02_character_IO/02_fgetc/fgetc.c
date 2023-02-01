#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *fp;
    int ret = 0;
    int ch;

    fp = fopen("cpu.h", "r+");
    if(fp == NULL)
    {
        printf("Cannot open the file\n");
        exit(1);
    }

    /*
    Declaration :-      int fgetc(FILE *fptr);
    */
    ch = fgetc(fp);
    while(ch != EOF)
    {
        printf("%c", ch);
        ch = fgetc(fp);
    }

    ret = fclose(fp);
    if(ret == EOF)
    {
        printf("Error in closing the file\n");
        exit(1);
    }


}