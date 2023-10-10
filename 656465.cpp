//打印多维数组的方法一 
#include <stdio.h>
void print(int arr[3][6], int x, int y)
{
	int i=0;
	for(i=0;i<x;i++)
	{
		int j=0;
		for(j=0;j<y;j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}
int main(){
	int arr[3][6]={{1,2,3,4,2,5},{2,3,4,5,6,7},{6,5,4,1,3,8}};
	print(arr, 3, 6);
	
	return 0;
}
