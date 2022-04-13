#include "_putchar.h"

/**
 * A function that prints the alphabet,
 * in lowercase, followed by a new line.
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
