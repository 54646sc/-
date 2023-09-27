#include <stdio.h>
int main(){
	int a,b,n;
	a=1;
	b=0;
	for(n=1;n<=3;n++)
	{
		a=a*n;
		b=b+a;
	}
	printf("%d", b);
	return 0;
}
