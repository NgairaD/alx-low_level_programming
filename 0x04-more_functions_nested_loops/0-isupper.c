#include "main.h"

/**
  * _isupper - checks if a character is upper.
  * @c: character
  * Return: 1 if true, 0 if not
  */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	else
		return (0);
}
