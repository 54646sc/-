#include <stdio.h>
int main(){
	int a;
	scanf("%d", &a);
	int i=0;
	int arr[6] = {1,2,3,4,5,6};
	int sz = sizeof(arr)/sizeof(arr[0]);
	for(i=0;i<sz;i++)
	{
		if(a==arr[i])
		{
			printf("�ҵ��ˣ��±���%d", i);
			break;
		}
		
	 }
	if(i==sz)
	printf("�Ҳ���"); 
	return 0;
}
