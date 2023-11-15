#include <stdio.h>
#include <string.h>
int main(){
	char arr[99]="sdghu";
	int len = strlen(arr);
	strncat(arr,arr,len);
	printf("%s",arr);
	return 0;
}
