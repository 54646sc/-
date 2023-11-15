#include <stdio.h>
#include <string.h>
int main(){
	char p[99]="hgdfh";
	char pp[99]="hgui";
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
