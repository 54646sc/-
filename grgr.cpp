#include <stdio.h>
#include <ctype.h>
int main(){
	char arr = 's';
	int ret = islower(arr);
	if(ret != 0)
	{
		printf("是一个小写字母\n");
		
	}
	else 
	{
		printf("不是一个小写字母\n");
	}
	return 0;
} 
