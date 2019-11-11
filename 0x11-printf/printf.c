iinclude <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "holberton.h"
int _printf(const char* format, ...)

{
	va_list list;
	int i = 0;
	char ch;
	va_start (list, format);
	char *str;

	while (format[i])
	{
		while (format[i] != '%')
		{
			putchar(format[i]);
			i++;
		}
		switch(format[i])
		{
		caso 'c':
			ch = va_arg;
			putchar(ch);
			break;

		}
	}
	va_end;
}
