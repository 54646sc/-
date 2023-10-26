//牛牛从键盘输入一个整数，请你判断这个整数能被 2 3 7 中哪几个数整除，并按升序输出。如果不能被 2 3 7 任意一个数整除则输出 n。
#include <stdio.h>
int main(){
	int a;
	scanf("%d",&a);
	if(a%2==0)
	{
		printf("%d ",2);
	}
	if(a%3==0)
	printf("%d ",3);
	if(a%7==0)
	printf("%d",7);
	if(a%2!=0&&a%3!=0&&a%7!=0)
	{
		printf("n");
	}
	return 0;
}
