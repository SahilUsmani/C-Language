/* 
    Program to print the size of pointer variables and size of values dereferenced by them
 */

#include <stdio.h>

int main(int argc, char *argv[])
{
    char letter = 's';
    int num = 1000;
    float deci = 349.43;
    double md = 3432.343;

    char *pl = &letter;
    int *pn = &num;
    float *pd = &deci;
    double *pmd = &md;

    printf(" sizeof(pl) :: %lu\t sizeof(*pl) :: %lu\n", sizeof(pl), sizeof(*pl));
    printf(" sizeof(pn) :: %lu\t sizeof(*pn) :: %lu\n", sizeof(pn), sizeof(*pn));
    printf(" sizeof(pd) :: %lu\t sizeof(*pd) :: %lu\n", sizeof(pd), sizeof(*pd));
    printf(" sizeof(pmd) :: %lu\t sizeof(*pmd) :: %lu\n", sizeof(pmd), sizeof(*pmd));

    return 0;
}

/*
    Size of pointer variable will be same irrespective of the data type. And it's architecture dependent.
    Then Why do we need datatype in front of pointer variable while declaring it?
    Because the value of pointer only tells the address of starting byte. So compiler will which address to look at 
    but how many bytes is needed to be retrieved is dependant on the datatype.
*/
