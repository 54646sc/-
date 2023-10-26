//еп╤ойг╡╩йгвжд╦
#include <stdio.h>
int main(){
	int ch;
	while((ch=getchar())!=EOF)
	{
		getchar();
		if(ch>='a'&&ch<='z'||(ch>='A'&&ch<='Z'))
		{
			printf("%c is an alphabet\n",ch);
		}
		else
		{
			printf("%c is not an alphabet\n",ch);
		}
	}
	return 0;
} 
