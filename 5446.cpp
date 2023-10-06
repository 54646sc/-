#include <stdio.h>
#define a 5
int main(){
	int s[a];
	int* p;
	for(p=&s[0];p<&s[5];)
	{
		*p=0;
		p++;
	}
	int i;
	for(i=0;i<5;i++)
	{
	
	printf("%d ", s[i]);}
	return 0;
}
