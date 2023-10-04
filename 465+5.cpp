#include <stdio.h>
int fact(int n)
{
	int a=1;
	int b=1;
	int c=1;
	while(n>2)
	{
		c=a+b;
		a=b;
		b=c;
		n--;
	}
}

int main(){
	int n,k;
	scanf("%d", &n);
	k=fact(n);
	printf("%d",k);
	return 0;
}
