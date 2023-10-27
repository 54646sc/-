#include <stdio.h>
int main(){
	char ch;
	while((ch=getchar())!=EOF)
	{
		getchar();
		putchar(ch);
	}
	return 0;
}
