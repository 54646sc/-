#include <stdio.h>
int main(){
	int arr1[]={1,2,3,4,5,6};
	int arr2[]={2,3,4,5,6,7};
	int  arr3[]={3,4,5,6,7,8};
	int* arr[3]={arr1,arr2,arr3};
	int i;
	for(i=0;i<3;i++)
	{
		int j;
		for(j=0;j<5;j++)
		{
			printf("%d ", *(arr[i]+j));
			
		}
		printf("\n");
	}
	return 0;
}
