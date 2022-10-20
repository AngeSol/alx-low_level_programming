#include <stdio.h>

void__attribute__((constructor)) hare(void);

/**
 * hare - prints a strings before
 */
void hare(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
