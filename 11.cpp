#include <stdio.h>
int main(){
	int i=0;
	int sum=0;
	int n=0;
	scanf("%d", &n);
	for(i=1;i<=n;i++)
	{
		int ret = 1;
		int j;
		for(j=1;j<=i;j++)
		{
			ret*=j;
		}
		sum+=ret;
	}
	printf("%d", sum);
	return 0;
}
