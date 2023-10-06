#include <stdio.h>
int my(char* k)
{
	char* start = k;
	char* end = k;
	while(*end!='\0')
	{
		end++;
	}
	return end - start;
}
int main(){
	char arr[]="adsrsh";
	int len = my(arr);
	printf("%d ", len);
	return 0;
}
