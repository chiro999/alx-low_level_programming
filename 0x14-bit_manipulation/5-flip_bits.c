#include "main.h"
#include <stdio.h>

/**
 * flip_bits - flip bits to convert one number to another number
 * @n: first number
 * @m: second number to convert to
 * Return: number of bits that was needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{

	unsigned long int bit_map;
	int i = 0;

	/* xor between n and m to find the number of different bits */	
	bit_map = n ^ m;
	i = 0;
	
	/* while loop to clear least significant bit, i++ and set bit_map to zero */
	while (bit_map)
	{
		i++;
		bit_map =  bit_map & (bit_map - 1);
	}

	return (i);
}
