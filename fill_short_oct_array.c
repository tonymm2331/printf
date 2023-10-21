#include "main.h"

/**
 * fill_short_oct_array - calculates short oct int
 * @bnr: array with binary
 * @oct: array with octal
 * Return: binary array
 */

char *fill_short_oct_array(char *bnr, char *oct)
{
	int n, x, y, noct, l;

	oct[6] = '\0';
	for (x = 15, noct = 5; x >= 0; x--, noct--)
	{
		if (x > 0)
			l = 4;
		else
			l = 1;
		for (n = 0, y = 1; y <= l; y *= 2, x--)
			n = ((bnr[x] - '0') * y) + n;
		x++;
		oct[noct] = n + '0';
	}
	return (oct);
}
