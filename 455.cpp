#include <stdio.h>
int a(char* p)
{
	if(*p!=0)
	{
		return 1+a(p+1);
	}
	else 
	return 0;
}
int main(){
	char arr[] = "bhuiuit";
	int len = a(arr);
	printf("%d", len);
	return 0;
}
