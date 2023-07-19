#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: A C program that prints a sentence without printf nor puts
 *
 * Return: 1 (not success)
*/

int main(void)
{	char message[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(1, message, 59);
	return (1);
}
