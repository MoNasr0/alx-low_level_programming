#include <stdio.h>
int main(void)
{
	char n = '0';
	char c = 'a';

	while(n < '10')
	{
		putchar(n);
		n++;
	}
	while(c <= 'f')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return 0;
}
