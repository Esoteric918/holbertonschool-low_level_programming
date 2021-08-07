#include <stdio.h>

void Tortoise_Hire(void)__attribute__((constructor));

/**
 * Tortoise_hire -returns before main
 *
 */
void Tortoise_Hire(void)
{
	printf("You're beat! and yet, you must allow,");
	printf("\nI bore my house upon my back!\n");
}
