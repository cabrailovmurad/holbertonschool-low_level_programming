#include <stdio.h>

/**
 * main - Prints the program name
 * @argc: Argument count (unused)
 * @argv: Argument vector (array of strings)
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	(void)argc;  /* Suppress unused variable warning */
	printf("%s\n", argv[0]);
	return (0);
}
