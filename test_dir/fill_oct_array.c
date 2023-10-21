#include "main.h"

/**
 * fill_oct_array - writes char to stdout
 * @bnr: array with binary
 * @oct: array with octal
 * Return: binary array
 */

char *fill_oct_array(char *bnr, char *oct)
{
	int n, x, y, noct, l;

	oct[11] = '\0';

	for (x = 31, noct = 10; x >= 0; x--, noct--)
	{
		if (x > 1)
			l = 4;
		else
			l = 2;
		for (n = 0, y = 1; y <= l; y *= 2, x--)
			n = ((bnr[x] - '0') * j) + n;
		x++;
		oct[noct] = n + '0';
	}
	return (oct);
}
