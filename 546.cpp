//交换两个数组
#include <stdio.h>
 int dayinhanshu(int arr[], int sz)
    {
	int i;
    for(i=0;i<sz;i++)
    {
    	printf("%d ", arr[i]);
	}

}
int main(){
	int arr1[5]={1,3,5,7,9};
	int arr2[5]={2,4,6,8,0};
	int i = 0;
	int sz=sizeof(arr1)/sizeof(arr1[1]);
	for(i=0;i<sz;i++)
	{
		int temp = arr1[i];
		arr1[i]=arr2[i];
		arr2[i]=temp;
    }
   
    dayinhanshu(arr1, sz);
    printf("\n");
    
    
    
    
    dayinhanshu(arr2, sz);
	return 0;
} 
