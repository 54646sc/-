#include <stdio.h>
int main(){
	char ch;
	
	while((ch=getchar())!=EOF)
	{
		
		getchar();
		printf("%c\n",ch+32);
		
	}
	return 0;
}
