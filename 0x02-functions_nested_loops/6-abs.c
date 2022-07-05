#include "main.h"
#include <stdio.h>

/**
 * _abs - value absolute
 * @n: int to print
 * Retuen: 0 Always
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	else if (n == 0)
	{
		return (0);
	}

	else
	{
		return (n);
	}
}
