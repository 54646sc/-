#include <stdio.h>
int main(){
	char arr[] = "faed";
	char* pc = arr;
	printf("%s\n", arr);
	printf("%s\n", pc);
	printf("%p\n", pc);
	printf("%p\n", arr+1);
	printf("%p\n", &arr+1);
	return 0;
}
