#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
*/
int main(void)
{
	char lower = 'a';

	while (lower <= 'z')
	{
		if (lower != 'e' && lower != 'q')
		{
			putchar(lower);
			lower++;
		}
	}

	putchar('\n');

	return (0);
}
