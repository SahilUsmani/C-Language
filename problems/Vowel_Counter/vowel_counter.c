/*
Problem :: 04

Write a program to count the vowels present in a sentence

*/

#include <stdio.h>

#define MAX_LIMIT 500

int vowel(char *);

int main(void) {

    int i = 0;
    int count = 0;
    char s[MAX_LIMIT];

    printf("Enter the sentence\n");
    scanf("%[^\n]%*c", s);

    printf("The number of vowels :: %d\n", vowel(s));

    return 0;

}

int vowel(char *str) {

    int i = 0;
    int count = 0;

    while (str[i] != '\0') {
        if (str[i]=='A' || str[i]=='a' || str[i]=='E' || str[i]=='e' || str[i]=='I' || 
        str[i]=='i' || str[i]=='O' || str[i]=='o' || str[i]=='U' || str[i]=='u') {
            count++;    
        }
        i++;
    }

    return count;
}