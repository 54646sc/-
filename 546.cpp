#include <stdio.h>
#include <string.h>
int main(){
	char arr[] = "hello world";
	memset(arr, 's', 5);
	printf("%s", arr);
	return 0;

}
