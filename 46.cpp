#include <stdio.h>
int main(){
	int arr[] = {1,2,3,4,1,2,3,4,5};
	int i,j;
	
	int sz = sizeof(arr)/sizeof(arr[0]);
	for(i=0;i<sz;i++)
	{
		int count = 0;
		for(j=0;j<sz;j++)
		{
			if(arr[i]==arr[j])
			count++;
		}
		if(count==1)
		{
			printf("找到了，单身狗是%d", arr[i]);
			break;
		}
	}
	return 0;
}
