#include <string.h>
#include <stdio.h>
int main()
{
	
	char arr[11];
	scanf("%s",arr);
	char *p=arr;
	scanf("%s",&arr);
	char*p2=arr;
	strcpy(p,p2);
	printf("%s",p);
	return 0;
 } 
