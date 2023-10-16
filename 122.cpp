#include <stdio.h>
int main(){
	int n=3;
	int a[n][n]={{1,2,3},{4,5,6},{7,8,9}};
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	return 0;
} 
