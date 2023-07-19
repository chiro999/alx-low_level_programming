#inlcude "function_pointers.h"

/**
 * print_name - Prints a name
 * @name: the name to print
 * @f: function pointer
 *
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
