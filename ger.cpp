#include <stdio.h>
int main()
{
	int n,m; int i,j;int flag=0;
	scanf("%d%d",&n,&m);
	int arr1[n][m];
	int arr2[n][m];
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&arr1[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&arr2[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(arr1[i][j]!=arr2[i][j])
			{
				flag=1;
			}
		}
	}
	if(flag==0)
	{
		printf("Yes\n");
	}
	else
	{
		printf("No\n");
	}
	return 0;
}
