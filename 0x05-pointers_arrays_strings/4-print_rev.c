#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: string to reverse
 */
void print_rev(char *s)
{
int l = 0;
while (*(s + l) != '\0')
{
l++;
}
l++;
for (; l >= 0; l--)
{
_putchar(*(s + l - 1));
}
_putchar('\n');
}
