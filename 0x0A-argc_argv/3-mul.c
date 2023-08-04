#include <stdio.h>

/**
 * main - Entry point
 * @argc: int
 * @argv: list
 * Return: Always 0
*/
int main(int argc, char *argv[])
{
	int i, int firstdgt, int seconddgt, int mult;

	if (argc - 1 != 2)
	{
		printf("%s\n", "Error");
		return (1);
	}
	else
	{
		firstdgt = atoi(argv[1]);
		seconddgt = atpo(argv[2]);
		mult = firstdgt * seconddgt;
		printf("%d\n", mult);
	}
	return (0);
}
