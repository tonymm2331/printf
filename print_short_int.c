#include "main.h"

/**
 * prinhint - prints short int
 * @arguments: intput str
 * @buf: buffer pointer
 * @ibuf: index for buffer pointer
 * Return: num of chars
 */

int prinhint(va_list arguments, char *buf, unsigned int ibuf)
{
	short int n;
	unsigned short int x, y, i, d, neg;

	n = va_arg(arguments, int);
	neg = 0;

	if (n < 0)
	{
		x = n * -1;
		ibuf = handl_buf(buf, '-', ibuf);
		neg = 1;
	}
	else
		x = n;

	y = x;
	d = 1;

	while (y > 9)
	{
		d *= 10;
		y /= 10;
	}

	for (i = 0; d > 0; d /= 10, i++)
		ibuf = handl_buf(buf, ((x / d) % 10) + '0', ibuf);

	return (i + neg);
}
