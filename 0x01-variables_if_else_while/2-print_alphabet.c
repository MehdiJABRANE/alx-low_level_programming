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
	for (int i = 0; i < 26; i++)
		putchar(i + 97);
	putchar('\n');
	return (0);
}
