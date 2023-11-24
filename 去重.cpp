//序列中整数的去重
#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int arr[n];
	int y[5001]={0};
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<n;i++)
	{
		if(y[arr[i]]==0)
		{
			printf("%d ",arr[i]);
			y[arr[i]]=1;
		}
	}
	return 0;
 } 
