//еп╤окд╪╬
#include <stdio.h>
int main(){
	int a;
	scanf("%d",&a);
	a=a%10+10*((a/10)%10);
	if(a>=3&&a<=5)
	{
		printf("╢╨лЛ\n");
	}
	else if(a>=6&&a<=8)
	{
		printf("summer\n");
	}
	else if(a>=9&&a<=11)
	{
		printf("fall\n");
	}
	else
	{
		printf("winter\n");
	}
	return 0;
} 
