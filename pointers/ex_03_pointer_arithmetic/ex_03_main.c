/* 
    Program demonstrating Pointer Arithmetic
*/

#include <stdio.h>

int main(int argc, char *argv[])
{
    int a = 10, *pa = &a;
    int b = 20, *pb = &b;
    int c = 30, *pc = &c;
    int d = 30, *pd = &d;

    printf("The value of pa, pb, pc before arithmetic operations\n\n");

    printf("The value of pa & address of a :: %p\n", pa);
    printf("The value of pb & address of b :: %p\n", pb);
    printf("The value of pc & address of c :: %p\n", pc);
    printf("The value of pc & address of d :: %p\n\n", pd);

    pa++;
    pb--;
    pc = pc + 2;
    pd = pd -2;

    printf("The value of pa, pb, pc after arithmetic operations\n\n");

    printf("The value of pa & address of a :: %p\n", pa);
    printf("The value of pb & address of b :: %p\n", pb);
    printf("The value of pc & address of c :: %p\n", pc);
    printf("The value of pc & address of d :: %p\n\n", pd);


    return 0;
}