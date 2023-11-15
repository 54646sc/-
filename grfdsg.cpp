#include <stdio.h>
#include <string.h>
int main(){
	const char *p="gfd";
	const char *pp= "gf";
	int ret= strcmp(p,pp);
	printf("%d",ret );
	return 0;
	
}
