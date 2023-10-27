#include <stdio.h>
int main(){
	char arr[11];
	scanf("%s",&arr);
	for(int i=0;i<10;i++)
	{
		printf("%d",arr[i]-'0');
	}
	return 0;
} 
