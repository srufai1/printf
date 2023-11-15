<!-- ************__DESCRIPTION__*************** -->

This project implements a custom version of the printf function in C. The standard [printf] function is used for formmated output, allowing you to printf text with various format specifiers for the variables like inetegers, characters, strings and more. This implementation aims to replicate the functionality of the standard 'printf'.
The function returns the number of characters printed (excluding the null byte used to end output to strings). Format is a character string. The format string is composed of zero or more directives. See [man 3 printf] for more detail.

<!-- ***************__USAGE__****************** -->

To use the custom 'printf' function:
1. include the provided ['main.h'] header file in your C source files. The function prototype is: int _printf(const *format, ...).

2. You can call [_printf] in your code with the desired format string and any necessary arguments, similar to how you would use the [standard_printf] function.
Example usage:

#include "main.h"

int main(void) {
    int number = 42;
    char character = 'A';
    char *text = "Hello, World!";
    
    _printf("Number: %d\n", number);
    _printf("Character: %c\n", character);
    _printf("Text: %s\n", text);
    _printf("percent sign: %%");
    
    return 0;
}

<!-- *******Supported Format Specifiers********* -->
This custom printf function can handle only the following format specifiers:

a. [%c]: Character
b. [%s]: String
c. [%d], [%i]: Integer
d. [%%]: Percent sign
{More specifiers can be added as needed}

We did not handle the following flags for the above format specifiers:
1. flag characters,
2. field width, 
3. precision
4. length modifiers 


<!-- **************Author****************** -->

Name: Suleman Rufai;
Email: srufai100@gmail.com

Name: Agbaraojo Sodiq
Email: Sodiqagbaraojo@gmail.com
