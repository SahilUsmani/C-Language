#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int name = FILENAME_MAX;
    int clret = 0;
    int ch = 0;
    int putret = 0;
    printf("FILENAME_MAX = %d\n", name);
    printf("EOF          = %d\n", EOF);

    FILE *fp1;
    fp1 = fopen("sample.txt", "w+");
    if(fp1 == NULL)
    {
        printf("Error in opening the file\n");
        exit(1);
    }
    /*
    - The process of establishing connection between the program and file is called opening the file.
    - When a file is opened, a stream is associated with that file, a buffer is created in the main memory
      for transferring the data to and from file.

      Declaration
        FILE *fopen(const char *filename, const char *mode);
    */

    printf("Enter the text:\n");
    while((ch = getchar())!= EOF) // make sure getchar is inside while loop
    {
        putret = fputc(ch, fp1);
        if(putret == EOF)
        {
            printf("Error in fputc\n");
            exit(1);
        }
    }
    // ctrl + d to stop reading characters

    clret = fclose(fp1); 
    /* Connection between file pointer and the file is broken.
       Now the file pointer fp1 is free to be connected to some other file.

       Declaration
        int fclose(FILE *fptr);

       Use      int closeall(void); to close all the opened files.
    */
    if(clret == EOF)
    {
        printf("Error in closing the file\n");
        exit(1);
    }
    return 0;
}