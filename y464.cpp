#include <stdio.h>
void ss(int* p)
{
	(*p)++;
}
int main(){
	int m=0;
	ss(&m);
	printf("%d\n", m);
	ss(&m);
	printf("%d\n", m);
	
	return 0;
}
