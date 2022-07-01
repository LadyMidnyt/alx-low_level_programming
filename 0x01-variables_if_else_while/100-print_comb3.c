#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int m;
	int n;

	for (m = 48; m <= 57; m++)
	{
		for (n = 48; n <= 57; n++)
		{
			if (n > m)
			{
				putchar(m);
				putchar(n);
				if (m != 56 || n != 57)
				{
					putchar(',');
					putchar(32);
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
