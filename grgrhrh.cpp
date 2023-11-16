#include <stdio.h>
#include <string.h>
int main()
{
	int arr[4]={1,23,4,5};
	int ch[4]={7,7,86,4};
	memcpy(ch,arr,sizeof(arr));
	for(int i=0;i<4;i++)
	{
		printf("%d ",ch[i]);
	}
	
	return 0;
}
