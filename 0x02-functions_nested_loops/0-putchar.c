#include "main.h"
/**
 *main - entry point.
 *Description: program starts and ends here.
 *Return: 0 on success.
 */
int main(void)
{
char emu[] = "_putchar";
int i;
for (i = 0; i < 8; i++)
{
   _putchar(emu[i]);
}
_putchar('\n');
return (0);
}
