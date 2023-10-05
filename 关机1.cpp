#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
	char input[20]={0};
	system("shutdown -s -t 60");
	again:
	printf("你的电脑将会在一分钟内关机，请在一分钟内输入我是猪\n");
	scanf("%s", input);
	if(strcmp(input, "我是猪")==0)
	{
		system("shutdown -a");
		
	}
	else
	{
		goto again;
	}
	
	return 0;
}
