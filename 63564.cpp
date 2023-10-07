#include <stdio.h>
int main(){
	int arr[10]={1,2,3,4,5,6,7,8,9,10};
	int i=0;
	printf("%p\n", &i);
	printf("%p", &arr);
	return 0;
}
