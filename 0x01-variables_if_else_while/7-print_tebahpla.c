#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: A C program that prints alphabets in lowercase
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int i;

	for (i = 26; i >= 0; i--)
		putchar(i + 96);
	putchar('\n');
	return (0);
}
