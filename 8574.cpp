#include <stdio.h>
int c(int n)
{
	int k,i;
	k=1;
	for(i=1;i<=n;i++)
	{
		k*=i;
	}
	return k;
	
}
int main(){
	int a,b;
	scanf("%d", &a);
	b=c(a);
	printf("%d", b); 
	return 0;
}
