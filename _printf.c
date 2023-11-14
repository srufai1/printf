#include "main.h"
/**
 * _printf - A custom printf function
 * @format: parameter
 * @...: more arguments
 * Return: char_count;
**/
int _printf(const char *format, ...)
{
va_list container;
va_start(container, format);
int char_count = 0;

while (*format != '\0')
{
if (*format == '%')
{
format++;
switch (*format)
{
case 'c':
char_count += _print_char(va_arg(container, int));
break;
case 's':
char_count += _print_str(va_arg(container, char *));
break;
case '%':
char_count += _print_char('%');
break;
case 'd':
case 'i':
char_count += _print_int(va_arg(container, int));
break;
}
}
else
{
char_count += _print_char(*format);
}
	format++;
}
va_end(container);
return (char_count);
}
