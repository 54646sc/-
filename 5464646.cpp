#include <stdio.h>
int main(){
	int a = 10;
	int* pa = &a;
	*pa=100;
	printf("%d", a);
	return 0;
} 
