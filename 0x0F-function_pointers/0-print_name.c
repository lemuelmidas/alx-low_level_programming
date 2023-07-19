#include "function_pointers.h"

/**
  * print_name - to print a name
  * @name: The name to be printed
  * @f: pointer to function
  *
  * Return: Null
  */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
