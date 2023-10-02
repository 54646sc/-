#include <stdio.h>
int a(char* p)
{
	int c=0;
	while(*p!='\0')
	{
		c++;
		p++;
	}
	return c;
}
int main(){
	char arr[] = "bit";
	int len = a(arr);
	printf("%d", len);
	return 0;
}
