#include "main.h"

/**
 * print_usr - prints string
 * @arguments: input str
 * @buf: buffer pointer
 * @ibuf: index for buffer pointer
 * Return: num of chars
 */

int print_usr(va_list arguments, char *buf, unsigned int ibuf)
{
	unsigned char *s;
	char *hex, *bin;
	unsigned int i, x, y;

	s = va_arg(arguments, unsigned char *);
	bin = malloc(sizeof(char) * (32 + 1));
	hex = malloc(sizeof(char) * (8 + 1));

	for (x = i = 0; s[i]; i++)
	{
		if (s[i] < 32 || s[i] >= 127)
		{
			ibuf = handl_buf(buf, '\\', ibuf);
			ibuf = handl_buf(buf, 'x', ibuf);
			y = s[i];
			bin = fill_binary_array(bin, y, 0, 32);
			hex = fill_hex_array(bin, hex, 1, 8);
			ibuf = handl_buf(buf, hex[6], ibuf);
			ibuf = handl_buf(buf, hex[7], ibuf);
			x += 3;
		}
		else
			ibuf = handl_buf(buf, s[i], ibuf);
	}
	free(bin);
	free(hex);
	return (i + x);
}
