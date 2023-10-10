//打印多维数组的方法二
#include <stdio.h>
void print(int (*p)[6], int x, int y)
{
	int i=0;
	for(i=0;i<x;i++)
	{
		int j;
		for(j=0;j<y;j++)
		{
			printf("%d ", *(*(p+i)+j));
		}
		printf("\n");
		
	}
}
int main(){
	int arr[3][6]={{1,2,3,4,5,6},{2,3,4,5,6,7},{3,4,5,6,7,8}};
	print(arr, 3, 6);
	return 0;
} 
