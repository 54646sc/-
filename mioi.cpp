#include <stdio.h>
#include <string.h>
int main(){
	char p[99]="hgdfh";
	char pp[99]="hgui";
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
