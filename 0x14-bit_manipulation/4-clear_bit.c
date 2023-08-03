#include "main.h"

/**
* clear_bit - Clears a specific bit at the given index by setting it to 0.
* @n: Pointer to the number to modify.
* @index: Index of the bit to clear.
* Return: 1 for success, -1 for error.
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index > 63)
return (-1);

*n = (~(1UL << index) & *n);
return (1);
}
