#include <stdio.h>
void fact(int arr[], int sz)
{
	int i;
	for(i=0;i<sz-1;i++)
	{
		int j;
		for(j=0;j<sz-1-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				int temp = arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
				
			}
		}
	}
}
int main(){
	int i;
	int arr[] = {9,8,7,6,5,4,3,2,1,0};
	int sz = sizeof(arr)/sizeof(arr[0]);
	fact(arr, sz);

	for(i=0;i<sz;i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
