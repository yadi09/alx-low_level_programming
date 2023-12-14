#include "main.h"

/**
 * get_bit - function
 * @n: ...
 * @index: .....
 * Return: ...
 */

int get_bit(unsigned long int n, unsigned int index)
{
int idx_bit;

idx_bit = (n >> index);
if (index > 32)
	return (-1);

return (idx_bit & 1);
}
