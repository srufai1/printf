#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int _printf(const char* format, ...);
int _print_char(char c);
int _print_str(char *str);
int _print_percent(void);
int _print_int(int value);

#endif
