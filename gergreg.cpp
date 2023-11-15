#include <stdio.h>
#include <string.h>
int main(){
	char *p="hgdfh";
	char *pp="hgui";
	char *ret = strstr(p,pp);
	if(ret == NULL)
	{
		printf("不是子集\n");
		
		}	
	else
	{
		printf("是他的一个子集\n");
	}
	return 0;
}
