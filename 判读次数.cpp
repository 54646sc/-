//判断一个数在数组中出现的次数 
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int count =0;
	int x;
	scanf("%d",&x);
	for(int i=0;i<n;i++)
	{
		if(arr[i]==x)
		{
			count++;
		}
	}
	printf("%d",count);
	return 0;
}
