#include "holberton.h"
#include <stdio.h>
void print_diagonal(int n)
{
	int i, j, k;

	for (i = 0; i < n; i++);
	{
		k = i - 1;
		for (j = i; j < k; j++)
		{
			_putchar (' ');
		}
		_putchar ('\\');
	}
	_putchar ('\n');
}
