//判断是否为大端存储还是小端存储； 
#include <stdio.h>
int main(){
	int a=1;
	char* p = (char*)&a;
	if(*p==1)
	{
		printf("是小端存储方式"); 
		 
	}
	else
	{
		printf("是大端存储方式"); 
	}
	return 0;
}
