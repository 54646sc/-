#include <stdio.h>
int main(){
	int a, b, c, d, e;
	scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
	double f;
	f = (a+b+c+d+e)/5.0;
	printf("%.1lf", f); 
	return 0;
}
