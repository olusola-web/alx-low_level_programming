#include "prototype.h"

/**
 * print_alphabet - prints the alphabet, in lowercase, by a new line
 */
void print_alphabet(void)
{
	char ch;

	ch = 'a';


	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}

	_putchar('\n');
}
