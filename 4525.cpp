#include <string.h>
#include <stdio.h>
int main(){
	char arr1[] = "fg";
	char arr2[] = {};
	strcpy(arr2, arr1);
	printf("%s\n", arr2);
	return 0;
}
