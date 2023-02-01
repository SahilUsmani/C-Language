/*
    Write a program to count the number of 'e' in the following array of pointer to the string

    char *s[] = {
            "we will teach you how to";
            "Move a mountain";
            "Level a building";
            "Erase the past";
            "Make a million"
    }
*/

#include <stdio.h>

void e_count(char *);

int main(void)
{
    char *s[] = {
            "we will teach you how to",
            "Move a mountain",
            "Level a building",
            "Erase the past",
            "Make a million",
    };

    e_count(*s);
    //printf("The number of 'e' :: %d\n", count);

    return 0;
}

void e_count(char *sp)
{
    int i = 0;
    int j = 0;
    int count = 0;
    char *a = sp[j];

    for (i = 0; i < 5; i++) {
        for (j = 0; a[j] != '\0'; j++) {
            if (a[j] == 'e') {
                count++;
            }
        }
    }

    printf("The occurence of 'e' :: %d\n", count);
}