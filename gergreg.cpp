#include <stdio.h>
#include <string.h>
int main(){
	char *p="hgdfh";
	char *pp="hgui";
	char *ret = strstr(p,pp);
	if(ret == NULL)
	{
		printf("�����Ӽ�\n");
		
		}	
	else
	{
		printf("������һ���Ӽ�\n");
	}
	return 0;
}
