#include "main.h"
/**
 * _print_char- A function to print a single character to the standard output
 * @c: function parameter
 * Return: 1 on success
 **/
int _print_char(char c)
{
write(1, &c, 1);
return (1);
}
