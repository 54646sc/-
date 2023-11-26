#include <stdio.h>
int main()
{
	int n,m;
	scanf("%d%d",&n,&m);
	int arr[n][m];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	int max=0;
	int x,y;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(max<arr[i][j])
			{
				max=arr[i][j];
				x=i+1;
				y=j+1;
			}
		}
		
	}
	
	printf("%d %d",x,y);
	
	return 0;
}
