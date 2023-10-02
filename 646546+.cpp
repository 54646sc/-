#include <stdio.h>
int max(int x, int y)
{
	if(x<y)
	return y;
	else
	return x;
}
int main(){
	int a,b;
	scanf("%d%d", &a, &b);
	int d = max(a, b);
	printf("%d", d);
	return 0;
}
