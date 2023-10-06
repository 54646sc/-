#include <stdio.h>
int main(){
	int a=70;
	
	int* p=&a;
	*p=54;
	printf("%d", *p);
	return 0;
}
