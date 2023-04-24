#include <stdio.h>
/**
 *main - prints the alphabet in lowercase,
 *followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
char alp[26] = "abcdefghijklmnopqrstuvwxy";
	int i;

	for (i = '0'; i < 26; i++)
{
	putchar(alp[i]);
}
putchar('\n');
return (0);
}
