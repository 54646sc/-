#include <stdio.h>
int main()
{
	int a = 0;
	while((a=getchar()) != EOF)
	{
		putchar(a);
	}
	return 0;
}
