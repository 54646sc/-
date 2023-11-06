#include <stdio.h>
#include <string.h>
int main(){
	char ch[90];
	gets(ch);
	printf("%s",ch);
	printf("%d",strlen(ch)); 
	return 0;
}
