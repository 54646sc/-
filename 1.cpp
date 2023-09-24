#include <stdio.h>
int main(){
	int a;
	printf("请输入一个数：");
	scanf("%d\n", &a);
	if (a%2 == 1)
	    printf("这是一个奇数");
	else
	    printf("这是一个偶数");
	 
	return 0;
} 
