#include "function_pointer.h"
/**
 * print_name - function that print a name
 * @name: name given
 * @f: point to a function
 */
void print_name(char *name, void(*f)(char *))
{
	if (f == &print_name_as_is)
		f(name);

	if (f == &print_name_uppercase)
		f(name);
}
