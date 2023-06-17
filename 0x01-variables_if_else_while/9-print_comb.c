#include <stdio.h>

/**
 * main - Enrty point
 *
 * Return: Always (0) (Success)
 */
int main(void)
{
nt n;

for (n = 48; n < 58; n++)
{
putchar(n);

if (n != 57)
{
putchar(',');
putchar(' ');
}
}

putchar('\n');

return (0);
}
