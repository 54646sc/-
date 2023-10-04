#include <stdio.h>
int fact(int n)
{
	if(n<=2)
	return 1;
	else
	return fact(n-1)+fact(n-2);
}
int main(){
	int ret,n;
	scanf("%d",&n);
	ret=fact(n);
	printf("%d", ret);
	
	return 0;
}
