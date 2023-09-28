#include <stdio.h>
int main(){
	int m, n, r;
	scanf("%d%d", &m, &n);
	while(m%n!=0)
	{
		r=m%n;
		m=n;
		n=r;
	}
	printf("%d", n);
	
	return 0;
}
