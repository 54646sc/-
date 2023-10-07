#include <stdio.h>
int add(int a, int b)
{
	return a+b;
 } 
int main(){
	int a=4;
	int b=0;
	int ret = add(a, b);
	printf("%d ", ret);
	return 0;
}
