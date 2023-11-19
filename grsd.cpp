#include <stdio.h>
#include <string.h>
int main()
{
	char arr[]={0};
	gets(arr);
	
	int len= strlen(arr);
	printf("%d",len);
	
	return 0;
}
