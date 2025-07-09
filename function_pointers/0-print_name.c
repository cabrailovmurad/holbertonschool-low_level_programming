#include "function_pointers.h"

/**
 * print_name - prints a name using a given function pointer
 * @name: the name to print
 * @f: pointer to a function that takes a char * and returns void
 *
 * Description: Calls the function pointed to by f, passing name as argument.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
