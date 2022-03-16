#include "pc.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *test = "PC";

	while (*test)
	{
		_putchar(*test);
		test++;
	}
	_putchar('\n');

	return (0);
}
