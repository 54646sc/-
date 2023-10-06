#include <stdio.h>
void print(int n)
{
	int i = 0;
	for(i=1;i<=n;i++)
	{
		int j = 0;
		for(j=1;j<=i;j++)
		{
			printf("%-2d*%-2d=%-3d", i, j, i*j);
		}
		printf("\n");
	}
}
int main(){
	int n = 0;
	scanf("%d", &n);
	print(n);
	return 0;
}
