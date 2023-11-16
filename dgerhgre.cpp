#include <stdio.h>
struct 
{
	int a;
	char arr[99];
}s,*p;
int main(){
	p=&s;
	return 0;
}
