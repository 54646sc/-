#include <stdio.h>
#include <string.h>
#include <errno.h>
int main()
{
	FILE* p=fopen("uhuh.cpp","r");
	if(p==NULL)
	{
		printf("%s\n",strerror(errno));
	}
	else
	{
		printf("�򿪳ɹ�\n");
	}
	return 0;
}
