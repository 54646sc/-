//�ж��Ƿ�Ϊ��˴洢����С�˴洢�� 
#include <stdio.h>
int main(){
	int a=1;
	char* p = (char*)&a;
	if(*p==1)
	{
		printf("��С�˴洢��ʽ"); 
		 
	}
	else
	{
		printf("�Ǵ�˴洢��ʽ"); 
	}
	return 0;
}
