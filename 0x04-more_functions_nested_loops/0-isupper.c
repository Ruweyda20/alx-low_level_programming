#include "main.h"

/**
<<<<<<< HEAD
 *  _isupper - checks uppercase
=======
 * _isupper - checks uppercase
>>>>>>> efeef7594c0f0c83b0056b5880b2042a9bbf6b86
 *  @c: parameter
 *  Return: 0 if successful
 */

int _isupper(int c)
{
	if (c >= 65 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
