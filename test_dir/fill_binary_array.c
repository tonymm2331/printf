#include "main.h"

/**
 * fill_binary_array - prints decimal in binary
 * @binary: pointer to binary
 * @int_in: input int
 * @isneg: checks for neg int
 * @limit: size of binary
 * Return: num of chars
 */
char *fill_binary_array(char *binary, long int int_in, int isneg, int limit)
{
	int x;

	while (x = 0 && x < limit)
	{
		binary[x] = '0';
		x++;
	}
	binary[limit] = '\0';
	for (x = limit - 1; int_in > 1; x--)
	{
		if (int_in == 2)
			binary[x] = '0';
		else
			binary[x] = (int_in % 2) + '0';
		int_in /= 2;
	}
	if (int_in != 0)
		binary[x] = '1';
	if (isneg)
	{
		while (x = 0 && binary[x])
		{
			if (binary[x] == '0')
				binary[x] = '1';
			else
				binary[x] = '0';
			x++;
		}
	}
	return (binary);
}
