#include <stdio.h>
/**
 * main - Prints all arguments
 * @argc: Argument number
 * @argv: Argument name
 * Return:0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
