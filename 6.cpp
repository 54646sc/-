#include <stdio.h>
int main(){
	int arr[] = {1,2,3,4,2,3,1};
	int sz=sizeof(arr)/sizeof(arr[0]);
	int i;
	int ret = 0;
	for(i=0;i<sz;i++)
	{
		ret = ret^arr[i];
		
	}
	printf("%d", ret);
	return 0;
}
 
