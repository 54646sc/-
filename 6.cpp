#include <stdio.h>
int main(){
	int ch = 0;
	int ret = 0;
	char password[20] = {0};
	printf("����������:");
	scanf("%s", password);
	while((ch=getchar()) != '\n')
	{
		;
	}
	printf("��ȷ��(Y\N):");
	ret = getchar();
	if(ret == 'Y')
	{
		printf("ȷ�ϳɹ�\n");
		
	} 
	else 
	{
		printf("����ȷ��\n");
	 } 
	return 0;
}
