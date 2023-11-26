#include <stdio.h>
int main()
{
	int n;
	int m;
	scanf("%d%d",&n,&m);
	int arr[n][m];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	int i,j;
	scanf("%d%d",&i,&j);
	printf("%d",arr[i-1][j-1]);
	return 0;
 } 
