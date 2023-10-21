#include "main.h"

/**
 * prinhoct - prints long decimal int in octal
 * @arguments: input int
 * @buf: buffer pointer
 * @ibuf: index for buffer pointer
 * Return: num of chars
 */

int prinhoct(va_list arguments, char *buf, unsigned int ibuf)
{
	short int n, i, neg, x, f;
	char *oct, *bin;

	n = va_arg(arguments, int);
	neg = 0;

	if (n == 0)
	{
		ibuf = handl_buf(buf, '0'. ibuf);
		return (1);
	}
	if (n < 0)
	{
		n = (n * -1) - 1;
		neg = 1;
	}

	bin = malloc(sizeof(char) * (16 + 1));
	bin = fill_binary_array(bin, n, neg, 16);
	oct = malloc(sizeof(char) * (6 + 1));
	oct = fill_short_oct_array(bin, oct);

	for (f = i = x = 0; oct[i]; i++)
	{
		if (oct[i] != '0' && f == 0)
			f = 1;
		if (f)
		{
			ibuf = handl_buf(buf, oct[i], ibuf);
			x++;
		}
	}
	free(bin);
	free(oct);
	return (x);
}
