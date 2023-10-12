#include <stdio.h>
int add(int x,int y)
{
	return x+y;
}
int main(){
	int a=10;
	int b=23;
	int (*p)(int ,int)=add;
	printf("%d", (*p)(a,b));
	return 0;
}
