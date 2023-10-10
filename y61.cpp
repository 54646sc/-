#include <stdio.h>
int main(){
	int a=10;
	int b=20;
	int c =30;
	int d=40;
	int i;
	int* arr[4]={&a,&b,&c,&d};
	for(i=0;i<4;i++)
	{
		printf("%d\n", *(arr[i]));
	}
	return 0;
}
