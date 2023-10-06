#include <stdio.h>
void print(int* p, int sz)
{
	int i = 0;
	for(i=0;i<sz;i++)
	{
		printf("%d ", *(p+i));
	}
}
int main(){
	int arr[10]={1,2,3,4,5,6,7,8,9,10};
	int sz = sizeof(arr)/sizeof(arr[0]);
	print(arr, sz);
	
	return 0;
}
