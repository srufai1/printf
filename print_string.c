#include "main.h"

/**
 *_print_str -A function to print strings to the standard output
 *@str: a pointer parameter
 *Return: c_count - The number of characters printed
 **/

int _print_str(char *str)
{
int c_count = 0;

	while (*str != '\0')
	{
	c_count += _print_char(*str);
	str++;
	}
return (c_count);
}
