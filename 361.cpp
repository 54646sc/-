#include <stdio.h>
void a(int arr[])
{
	int sz = sizeof(arr)/sizeof(arr[0]);
	printf("%d", sz);
	
}
int main(){
	int arr[10]={0};
	a(arr);
	
	return 0;
}
