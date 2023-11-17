#include <stdio.h>
#include <string.h>
int main(){
	char arr[99]="ymh.3099.com";
	char p[9]=".";
	char ch[99];
	strcpy(ch,arr);
	char* ret = NULL;
	for(ret = strtok(ch,p);ret !=NULL;ret = strtok(NULL,p))
	{
		printf("%s\n",ret);
	}
	return 0;
}
