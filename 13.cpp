//自定义strcpy库函数的优化版加上应用 
#include <stdio.h>
#include <assert.h>
char* my_strcpy(char* arr1, const char* arr2)
{
	char* ret = arr1;
	assert(arr1!=NULL);
	assert(arr2!=NULL);
	while(*arr1++ = *arr2++)
	{
		;
	}
    return ret;
	}
int main(){
	char arr1[]="###";
	char arr2[]="jjj";
	printf("%s\n", my_strcpy(arr1, arr2));
	return 0;
}
