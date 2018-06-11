#ifndef EOF
# define EOF (-1)
#endif

#include <stdio.h>

int my_puts(char* s)
{
	int x = printf("%s\n", s);
	return (x > 0) ? x : EOF;
}

