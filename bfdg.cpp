#include <stdio.h>
int main()
{
	int n;
	int arr[n+1];
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int a;
	scanf("%d",&a);
	int i;
	for(i=0;i<n;i++)
	{
		if(arr[i] >a)
		{
			break;
		}
		
	}
	int ret=i;
		for(i=n-1;i>=ret;i--)
		{
			arr[i+1]=arr[i];
		}
		arr[ret]=a;
	for(int i=0;i<n+1;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
 } 
