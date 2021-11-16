#include <stdio.h>
/**
 * message - Function that runs before main
 */
void __attribute__ ((constructor)) message (void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
