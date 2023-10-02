
#include <stdio.h>
int add(int x, int y);
int main(){
	int a = 10;
	int b = 1010;
	int sum = 0;
	sum = add(a, b);
	printf("%d\n", sum);
	
	return 0;
}
int add(int x, int y)
{
	int z=x+y;
	return z;
}
