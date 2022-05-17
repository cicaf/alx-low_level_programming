#include "function_pointers.h"

/**
 * print_name - name printing functon.
 * @name: whhats to be printed out,ie the name.
 * @f: the pointer holder.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
