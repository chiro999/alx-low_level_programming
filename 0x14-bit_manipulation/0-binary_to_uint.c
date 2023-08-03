#include <stdio.h>
#include <man.h>

/**
 * binary_to_uint - convert a binary number to an unsigned int
 * @b: char string
 * Return: converted decimal number or 0 if there is an unconvertible char
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0;
	int index = 0;

	if (b == NULL)
		return 0;
   
    
        char selected_char = b[index];

        // Check if the character is '0' or '1'
        if (current_char == '0' || current_char == '1')
        {
            // Convert the character to integer and update the decimal value
            dec = dec * 2 + (current_char - '0');
        }
        else
        {
            // If the character is not '0' or '1', return 0 (invalid input)
            return 0;
        }

        index++; // Move to the next character
    }

    return dec;
}
