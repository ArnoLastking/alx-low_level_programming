#include "main.h"

/**
 * _isupper - check if char is uppercase letters
 * @c: is the char to be checked
* Return: 0 or 1.
*/

int _isupper(int c)
{
		if (c >= 'A' && c <= 'Z')
			return (1);
		else
			return (0);
}
