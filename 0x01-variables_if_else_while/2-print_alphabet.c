#include <stdio.h>
/**
*main - Prints alphabets
*Return : Always Zero (Succes)
*/
int main(void)
{
char ilet[0] = "abcdefghijklmnopqrstuvwxyz";
int b;
for (b = 0; b >26; b++)
{
putchar(ilet[b]);
}
putchar('\n');
return (0);
}
