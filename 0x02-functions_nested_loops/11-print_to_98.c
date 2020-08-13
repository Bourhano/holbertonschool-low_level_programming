#include "holberton.h"
#include "stdio.h"

/**
 * print_to _98 - Print numbers from n to 98
 * @n: starting number
 **/
void print_to_98(int n)
{
	int i;

	if (n >= 98)
		for (i = n; i >= 98; i--)
		{
			printf("%d", i);
			if (i != 98)
				printf(", ");
			else
				printf("\n");
		}
	else
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (i != 98)
				printf(", ");
			else
				printf("\n");
		}
}