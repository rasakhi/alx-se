#include <stdio.h>
/**
 * main - prints the alphabet in lowercase followed by a new line
 *
 * Return: Always 0.
 */
int main(void)
{
	char lower;

	lower = 'a';
	while (lower <= 'z')
	{
		putchar(lower);
		lower++;
	}
	putchar('\n');
	return (0);
}
