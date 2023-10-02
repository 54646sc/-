#include <stdio.h>
void swap(int* a, int* n)
{
	int t;
	t=*a;
	*a=*n;
	*n=t;
}
int main(){
	int x,y;
	scanf("%d%d", &x, &y);
	swap(&x, &y);
	printf("%d %d", x, y);
	return 0;
}
