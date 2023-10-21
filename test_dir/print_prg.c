#include "main.h"
#include <stdio.h>

/**
 * print_prg - writes char c to stdout
 * @a: char
 * @buf: buf pointer
 * @i: index for buf pointer
 * Return: 1 on success
 */

int print_prg(va_list a __attribute__((unused)), char *buf, unsigned int i)
{
	handl_buf(buf, '%', i);

	return (1);
}
