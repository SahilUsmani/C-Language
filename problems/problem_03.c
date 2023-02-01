

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_LIMIT 100

int main(void) {

    int len = 0;
    char t;
    char d=' ';

    char *s = calloc(1, sizeof(char));

    while (scanf("%c", &t) == 1) {

        if (t == '\n') {
            break;
        }
        len = strlen(s);
        s = realloc(s, len+1);
        *(s + len) = t;
        *(s + len + 1) = '\0';
    }

    printf("The string is :: %s\n", s);
    printf("%d",d);
    return 0;
}

// int main(void) {

//     char s[MAX_LIMIT];

//     printf("Enter the string :: ");
//     scanf("%[^\n]%*c", s);

//     printf("The string is :: %s\n", s);
//     return 0;
// }

