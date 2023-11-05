#include <stdio.h>
#define UNUSED(x) (void)(x)
/**
 * main - Prints number of arguments
 * @argc: Number of arguments
 * @argv: Argument name
 * Return: 0
 */
int main(int argc, char *argv[])
{
	UNUSED(argv);
	printf("%d\n", argc - 1);
	return (0);
}
