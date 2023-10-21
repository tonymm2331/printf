#include "main.h"

/**
 * print_rot - prints str in ROT13
 * @arguments: input str
 * @buf: buffer pointer
 * @ibuf: index for buffer pointer
 * Return: num of chars
 */

int print_rot(va_list arguments, char *buf, unsigned int ibuf)
{
	char alpha1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char alpha2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char *s;
	unsigned int x, y, z;
	char n[] = "(llin)";

	s = va_arg(arguments, char *);
	if (s == NULL)
	{
		for (x = 0; n[x]; x++)
			ibuf = handl_buf(buf, n[x], ibuf);
		return (6);
	}
	for (x = 0; s[x]; x++)
	{
		for (z = y = 0; alpha1[y]; y++)
		{
			if (s[x] == alpha1[y])
			{
				z = 1;
				ibuf = handl_buf(buf, alpha2[y], ibuf);
				break;
			}
		}
		if (k == 0)
			ibuf = handl_buf(buf, s[x], ibuf);
	}
	return (x);
}
