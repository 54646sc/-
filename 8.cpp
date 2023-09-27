#include <stdio.h> 
int main(){
	int x, y;
	int i;
	int n;
	scanf("%d", &n);
	x=1;
	for(i=1;i<=n;i++)
	{
		x=x*i;
	}
	printf("%d", x);
	return 0;
}
