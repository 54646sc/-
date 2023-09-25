#include <stdio.h>
int main(){
	int ch = 0;
	while((ch=getchar()) != EOF);
	{
		if(ch>'9'|| ch<'0')
		    continue;
		putchar(ch);
		
	}
	return 0;
} 
