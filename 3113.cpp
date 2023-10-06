#include <stdio.h>
double pow(int n, int m)
{
	if(m==0)
	{
		return 1;
	}
	else if(m<0)
	{
		return 1.0/pow(n,-m);
	}
	else
	{
		return n*pow(n, m-1);
	}
}
int main(){
	int n,m;
	scanf("%d%d", &n, &m);
	double ret = pow(n, m);
	printf("%lf", ret);
	return 0;
}
