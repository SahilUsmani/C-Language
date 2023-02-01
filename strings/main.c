#include <stdio.h>
#include "usr_string.h"

int main()
{
    char str1[] = "CDAC Hyderabad";
    char str2[] = "India";
    char str3[] = "Time";
    unsigned int len = 0;

    printf("str 1 is :: %s\n", str1);
    printf("str 2 is :: %s\n", str2);
    printf("str 3 is :: %s\n", str3);

    len = string_length(str1);
    printf("The length of str1 is :: %d\n", len);

    printf("Copying the contents of str2 to str1 :: %s\n", string_copy(str1, str2));

    printf("Concatenating str1 and str2 :: %s\n", string_cat(str1, str2));

    printf("Comparing str1 and str2 :: %d\n", string_comp(str1, str2));

    printf("Reversing str3 :: %s\n", string_reverse(str3));

    return 0;   
}