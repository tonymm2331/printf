#include "main.h"

/**
 * print_oct - prints decimal number in octal
 * @arguments: input number
 * @buf: buffer pointer
 * @ibuf: index for buffer pointer
 * Return: number of chars printed
 */
int print_oct(va_list arguments, char *buf, unsigned int ibuf)
{
	int n, i, neg, x, f;
	char *octal, *binary;

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
	binary = malloc(sizeof(char) * (32 + 1));
	binary = fill_binary_array(binary, n, neg, 32);
	octal = malloc(sizeof(char) * (11 + 1));
	octal = fill_oct_array(binary, octal);

	for (f = i = x = 0; octal[i]; i++)
	{
		if (octal[i] != '0' && f == 0)
			f = 1;
		if (f)
		{
			ibuf = handl_buf(buf, octal[i], ibuf);
			x++;
		}
	}
	free(binary);
	free(octal);
	return (x);
}
