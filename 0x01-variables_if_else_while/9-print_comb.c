#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
*/
int main(void)
{
	int number = 0;

	while (number < 10)
	{
		int number2 = 0;

		while (number2 < 10)
		{
			putchar('0' + number);
			putchar('0' + number2);
			putchar(',');
			number2++;
		}

		number++;
	}

	putchar('\n');

	return (0);
}
