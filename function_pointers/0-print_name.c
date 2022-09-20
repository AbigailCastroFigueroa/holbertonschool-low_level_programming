#include "function_pointers.h"
/**
 * print_name - function that print a name
 * @name: name given
 * @f: point to a function
 */
void print_name(char *name, void(*f)(char *))
{
	if (f && name)
		f(name);
}
