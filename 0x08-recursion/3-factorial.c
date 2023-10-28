#include "main.h"
/**
 *Write a function that returns the factorial of a given number
 *Returns: the factorial of a given number
 */
int factorial(int n);
{
if (n < 0)
	return (-1);
else if (n == 0)
	return (1);
else
	return (n * factorial(n - 1));








}
