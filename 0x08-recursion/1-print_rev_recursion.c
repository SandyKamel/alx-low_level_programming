#include"main.h"
/**
 *Write a function that prints a string in reverse
 *_print_rev_recursion
 *@s : string to print
 */
void _print_rev_recursion(char *s);
{
	if(*s) 
	{
		_print_rev_recursion ( s+1 );
		putchar (*s);

	}


}
