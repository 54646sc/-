#include <stdio.h>
void chushihua(int arr[10], int sz)
{
	int i;
	for(i=0;i<sz;i++)
	{
		arr[i]=0;
	}
}
void dayinhanshu(int arr[10], int sz)
{
	int i;
	for(i=0;i<sz;i++)
	{
		arr[i]=i+1;
	}
}
void jiaohuanhanshu(int arr[10], int sz)
{
	int left=0;
	int right=sz-1;
	while(left<right)
	{
		int temp =arr[left];
		arr[left]=arr[right];
		arr[right]= temp;
		left++;
		right--;
	}
}
int main(){
	int arr[10]={0};
	int sz=sizeof(arr)/sizeof(arr[0]);
	chushihua(arr,sz);
	dayinhanshu(arr,sz);
	printf("\n");
	jiaohuanhanshu(arr,sz);
	int i = 0;
	for(i=0;i<sz;i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
