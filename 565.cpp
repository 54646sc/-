//���������Ķ��������м���һ 
#include <stdio.h>
int main(){
	int num;
	scanf("%d", &num);
	int count = 0;
	while(num)
	{
		if(num%2==1)
		{
			count++;
			num=num/2;
		}
	}
	printf("%d", count);
	return 0;
} 
