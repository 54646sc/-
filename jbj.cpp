#include <stdio.h>
#include <string.h>
int main(){
	char arr[99]="ymh.3099.com";
	char p[9]=".";
	char ch[99];
	strcpy(ch,arr);
	char * ret = strtok(arr,p);
	printf("%s\n",ret);
	ret = strtok(NULL,p);
	printf("%s\n",ret);
	char *rett = strtok(NULL,p);
	printf("%s\n",rett);
	
	return 0;
} 
