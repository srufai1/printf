#include "main.h"
/**
 *_print_int- A funtcion to print intergers
 *@num: function parameter
 *Return: num_digits
 */

int _print_int(int num)
{
int num_digits = 0;
int temp = num;
int *digits = (int *)malloc(sizeof(int) * num);

if (digits == NULL)
{
	_print_str("Memory not found!");
}
if (num < 0)
{
	_print_char('-');
	temp = -num;
	num_digits++;
}

do {
	digits[num_digits] = temp % 10;
	num_digits++;
	temp /= 10;
} while (temp > 0);

/*Print digits in reverse order*/
for (int i = num_digits - 1; i >= 0; i--)
{
	_print_char(digits[i] + '0');
}
	free(digits);
	return (num_digits);
}
