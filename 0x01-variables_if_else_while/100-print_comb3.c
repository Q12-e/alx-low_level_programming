#include <stdio.h>
/**
 * main - Prints numbers >0 and <100.
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
int a, b;
a = 48;
b = 48;
while (b < 58)
{
a = 48;
while (a < 58)
{
putchar(b);
putchar(a);
if (a == 57 && b == 57)
{
break;
}
putchar(',');
putchar(' ');
a++;
}
b++;
}
putchar('\n');
return (0);
}
