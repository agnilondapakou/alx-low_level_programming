#include <stdio.h>
#include "main.h"

/**
  * main - prints all arguments it receives
  * @argc: the number of arguments
  * @argv: the array of arguments
  *
  * Return: always 0 (success)
  */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
