#include <stdio.h>
int main(){
	int a=9;
	int b=78;
	a=a^b;
	b=a^b;
	a=a^b;
	printf("%d %d",a,b);
	return 0;
}
