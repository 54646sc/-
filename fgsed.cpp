#include <stdio.h>
#include <string.h>
int main(){
	char ch[99]="hsg";
	strcat(ch,ch);
	printf("%s",ch);
	return 0;
}
