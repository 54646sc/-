#include <stdio.h>
#include <ctype.h>
int main(){
	char arr = 's';
	int ret = islower(arr);
	if(ret != 0)
	{
		printf("��һ��Сд��ĸ\n");
		
	}
	else 
	{
		printf("����һ��Сд��ĸ\n");
	}
	return 0;
} 
