//�Զ���⺯��strlen���Ż���+Ӧ�� 
#include <stdio.h>
#include <assert.h>
int my_strlen(const char* arr)
{
	assert(arr!=NULL);
	int count = 0;
	while(*arr!='\0')
	{
		arr++;
		count++;
	}
    return count;
	}
int main(){
	char arr[]="hasd";
	int ret = my_strlen(arr);
	printf("%d\n", ret);
	return 0;
}  
