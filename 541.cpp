//�ж��ֽ�����Ż��� 
#include <stdio.h>
int check_sys()
{
	int a=1;
	//����1��С�ˣ�����0����� 
	return *(char*)&a; 
}
int main(){
	int ret = check_sys();
	if(ret==1)
	{
		
		printf("С��\n"); 
	}
	else
	{
		printf("С��\n");
	}
	
	return 0;
}
