#include "main.h"

/**
 * clear_bit - The value of a bit will be set to 0 at a certain index
 * @n: A pointer that/to change the number to
 * @index: An index that clears a bit
 *
 * Return: 1 just success, -1 fail
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
        if (index > 63)
                return (-1);
        *n = (~(1UL << index) & *n);
        return (1);
}
