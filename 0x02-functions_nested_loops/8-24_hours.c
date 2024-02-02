#include "main.h"

/**
 * jack_bauer- prints every minute of the day
 * Return: void
 */

void jack_bauer(void)
{
	int i;
	int j;

	i = 0;
	while (i < 24)
	{
		j = 0;
		while (j < 60)
		{
			_putchar(':' + j);
			j++;
			if (j < 10)
				_putchar(':' + '0' + j);
		}

		_putchar(i);
		i++;
		if (i < 10)
			_putchar('0' + i);
	}
}
