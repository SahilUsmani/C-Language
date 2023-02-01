
#include "usr_string.h"

char *string_reverse(char s[])
{
    int i =0;
    int j = 0;
    char temp;
    int size = 0;
    size = string_length(s);

    for(i=0, j=size-1; i<j; i++, j--)
    {
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }

    return s; 
}