#include <stdio.h>
#include <string.h>
int main(){
	char arr[10]="ll";
	memset(arr,'d',10);
	for(int i=0;i<10;i++)
	{
		printf("%s",arr);
	}
	return 0;
} 
