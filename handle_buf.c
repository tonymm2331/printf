#include "main.h"

/**
 * handl_buf - concatenates buffer chars
 * @buf: buffer pointer
 * @c: char to concat
 * @ibuf: index of buf pointer
 * Return: ibuf
 */

unsigned int handl_buf(char *buf, char c, unsigned int ibuf)
{
	if (ibuf == 1024)
	{
		print_buf(buf, ibuf);
		ibuf = 0;
	}
	buf[ibuf] = c;
	ibuf++;
	return (ibuf);
}
