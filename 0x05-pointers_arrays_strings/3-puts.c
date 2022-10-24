#include "Main.h"

/**
 * _puts - prints a string, followed by a newline to stdout
 * @str: string parameter to print
 *
 * Return: nothing
 */
void _puts(char *str)
{
	int count = 0;
	while(count >= 0)
	{
	if(str[count]=='\0')
	{
	_putchar('\n');
	break;
	}
	_putchar(str[count]);
	count++;
	}
}
