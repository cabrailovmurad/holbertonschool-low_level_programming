#include <stdio.h>
#include <stdlib.h>

/**
 * is_number - checks if a string is composed only of digits
 * @s: string to check
 *
 * Return: 1 if only digits, 0 otherwise
 */
int is_number(char *s)
{
	int i = 0;

	if (s[0] == '\0')
		return (0);

	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/**
 * main - Adds positive numbers
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: 0 on success, 1 if a non-digit input is found
 */
int main(int argc, char *argv[])
{
	int sum = 0, i, num;

	for (i = 1; i < argc; i++)
	{
		if (!is_number(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		num = atoi(argv[i]);
		sum += num;
	}

	printf("%d\n", sum);
	return (0);
}
