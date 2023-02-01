/* 
	Example of declaration, initialisation, address operation and dereferencing of pointers. 
	Pointers are special variables that can access memory 
*/

#include <stdio.h>

int *globe; // global pointer variables are by default initialised with NULL, it means they are pointing to NULL.

int main(int argc, char *argv[])
{
        int i = 1000000;
        int j = 8998752;
		char z = 's';

        int *sky; // declaring variable sky as pointer.
        int *ocean; // declaring variable ocean as pointer.
		int *roam; // local uninitialised pointer variable will point to some random memory location or segmentation fault
		int *notroam = NULL; // It's best to initialise a pointer with NULL if it is not pointing to anything.
		char *letter = &z; // we can alo declare and initialise a pointer directly. 

		/*
			In C we have and address operator "&" through which we can access the address of that variable.
			In below example "&i" means "address of i"
		*/
        sky = &i; // initialization of pointer sky, sky is storing the address of variable i.
        ocean = &j; // initialization of pointer ocean, ocean is storing the address of variable j.

		/* 
			Using asterisk (*) sign we can access the data inside that address which our pointer is pointing to.
			*sky is same as *(&i). 
		*/
        printf("The value sky is pointing to is :: %d\n", *sky); 
		printf("The value letter is pointing to is :: %c\n", *letter);
        printf("The value ocean is pointing to is :: %d\n\n", *ocean);

		printf("The address of sky is :: %p\n", &sky);
		printf("The address of variable i is :: %p\n", &i);
		printf("The address of letter is :: %p\n", &letter);
		printf("The address of variable z is :: %p\n", &z);
		printf("The address of ocean is :: %p\n", &ocean);
		printf("The address of variable j is :: %p\n\n", &j);

		/* 
			If we try to access data from a pointer which is pointing to NULL, we'll get segmentation fault. 
		*/
		//printf("The value of global pointer globe is :: %d\n", *globe);
		//printf("%d\n", *notroam);
		 
		/* 
			If we try to access data from a pointer which is local and uninitialised then that pointer will point to
			a random memory location and print some garbage value.
		*/
		//printf("The value of local uninitialised pointer roam is :: %d\n\n", *roam);
		
		printf("The address of globe is :: %p\n", &globe);
		printf("The address of roam is :: %p\n", &roam);
		printf("The address of notroam is :: %p\n", &notroam);

        return 0;
}
