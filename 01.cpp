//�������Ķ�������1�ĸ��� 
#include <stdio.h>
#include <stdlib.h>
int c(int n)
{
	int count = 0;
	while(n)
	{
		n=n&(n-1);
		count++;
	}
	 return count;
}
int main(){
	int n = 0;
	scanf("%d", &n);
	int count = c(n);
	printf("%d", count); 
	return 0;
	system("pause");
}
