#include <stdio.h>
#include <string.h>
int main(){
	int i = 0;
	char password[20
	] = {0};
	printf("��������\n");
	
	for(i=0;i<3;i++)
	{
		scanf("%s", password);
		if(strcmp(password, "123456") == 0)
		{
		
		    printf("�ɹ�\n");
		    break;}
		else
		{
		
		    printf("��¼ʧ��\n");}
		 
	}
	if(i==3)
	    printf("�˻�����\n"); 
	return 0;
} 
