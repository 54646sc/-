#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
	char input[20]={0};
	system("shutdown -s -t 60");
	again:
	printf("��ĵ��Խ�����һ�����ڹػ�������һ����������������\n");
	scanf("%s", input);
	if(strcmp(input, "������")==0)
	{
		system("shutdown -a");
		
	}
	else
	{
		goto again;
	}
	
	return 0;
}
