#include <stdio.h>
/**
 * main - Prints the program name;
 * @argc: Argument count.
 * @argv: Argument array
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
