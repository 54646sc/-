#include <stdio.h>
#include <errno.h>
#include <string.h>
int main(){
	char *p=strerror(errno);
	printf("%s\n",p);
	return  0;
}
