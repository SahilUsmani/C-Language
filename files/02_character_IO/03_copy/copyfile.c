#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    FILE *fsrc, *fdst;
    int ret = 0;
    int ch = 0;

    //opening the source file
    if((fsrc = fopen("cpu.h","r")) == NULL) {
        printf("Error in opening the source file\n");
        exit(EXIT_FAILURE);
    }

    //opening the destination file
    if((fdst = fopen("destination.h", "w")) == NULL) {
        printf("Error in opening the destination file\n");
        exit(EXIT_FAILURE);
    }

    while((ch = fgetc(fsrc)) != EOF) { // reading each character from source
        ret = fputc(ch, fdst); // writing each character to destinationss
        if(ret == EOF) {
            printf("Error in writing to the destination file\n");
            exit(EXIT_FAILURE);
        }
    }

    if((fclose(fsrc) == EOF)) {
        printf("Error in closing source file\n");
        exit(EXIT_FAILURE);
    }

    if((fclose(fdst) == EOF)) {
        printf("Error in closing destination file\n");
        exit(EXIT_FAILURE);
    }

    return 0;
}