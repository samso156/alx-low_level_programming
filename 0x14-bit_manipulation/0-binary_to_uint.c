#include "main.h"
/**
 * binary_to_uint - converts a binary string to an unsigned int
 * @b: the binary string to convert
 *
 * Return: the converted value as an unsigned int, or 0 if invalid
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int binary_length = 0, base = 1;

	if (!is_valid_binary_string(b))
		return (0);

	while (b[binary_length] != '\0')
		binary_length++;

	while (binary_length)
	{
		result += ((b[binary_length - 1] - '0') * base);
		base *= 2;
		binary_length--;
	}
	return (result);
}

/**
 * is_valid_binary_string - checks if a string contains
 * only valid binary characters
 * @b: the string to check
 *
 * Return: 1 if the string is valid, 0 otherwise
 */
int is_valid_binary_string(const char *b)
{
	if (b == NULL)
		return (0);

	while (*b)
	{
		if (*b != '1' && *b != '0')
			return (0);
		b++;
	}
	return (1);
}

