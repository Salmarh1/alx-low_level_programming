#include <stdio.h>

/*
 *description: is the main function for the 102-magic.c program.
 * It demonstrates a coding challenge where we need to modify
 * the value of a specific array element indirectly.
 *
 * The program initializes an array 'a' and an integer 'n'.
 * It sets a[2] to 1024 and uses a pointer 'p' to modify
 * a[2] to be 98 without directly referencing 'a'.
 *
 * After the modification, it prints the value of a[2].
 */
int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;
  /*
   * write your line of code here...
   * Remember:
   * - you are not allowed to use a
   * - you are not allowed to modify p
   * - only one statement
   * - you are not allowed to code anything else than this line of code
   */
	*(p + 5) = 98;
  /* ...so that this prints 98\n */
printf("a[2] = %d\n", a[2]);
return (0);
}
