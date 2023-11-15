#include <stdio.h>
#include <string.h>
int main(){
	char *p="gds";
	char *pp="grsg";
	int ret = strncmp(p,pp,1);
	printf("%d",ret);
	return 0;
} 
