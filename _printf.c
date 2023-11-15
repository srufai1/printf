#include "main.h"

/**
 * _printf - A custom printf function
 * @format: format specifier string
 * @...: additional arguments
 * Return: number of characters printed
**/
int _printf(const char *format, ...)
{
    int char_count = 0;
    va_list container;
    va_start(container, format);

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
