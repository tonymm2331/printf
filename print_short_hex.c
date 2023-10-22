#include "main.h"

/**
 * prinhhex - prints short decimal in hex
 * @arguments: input str
 * @buf: buffer pointer
 * @ibuf: index for buffer pointer
 * Return: num of chars
 */

int prinhhex(va_list arguments, char *buf, unsigned int ibuf)
{
	short int n, i, neg, x, f;
	char *hex, *bin;

	n = va_arg(arguments, int);
	neg = 0;
	if (n == 0)
	{
		ibuf = handl_buf(buf, '0', ibuf);
		return (1);
	}
	if (n < 0)
	{
		n = (n * -1) - 1;
		neg = 1;
	}

	bin = malloc(sizeof(char) * (16 + 1));
	bin = fill_binary_array(bin, n, neg, 16);
	hex = malloc(sizeof(char) * (4 + 1));
	hex = fill_hex_array(bin, hex, 0, 4);

	for (f = i = x = 0; hex[i]; i++)
	{
		if (hex[i] != '0' && f == 0)
			f = 1;
		if (f)
		{
			ibuf = handl_buf(buf, hex[i], ibuf);
			x++;
		}
	}
	free(bin);
	free(hex);
	return (x);
}
