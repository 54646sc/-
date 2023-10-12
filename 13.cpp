#include <stdio.h>
int sub(int x,int y)
{
	return x-y;
}
int add(int x,int y)
{
	return x+y;
}
int main(){
	int (*p[3])(int, int)={0,sub,add};
	int input;
	printf("Ñ¡Ôñ1£¬¼õ Ñ¡Ôñ2£¬¼Ó");
	scanf("%d", &input);
	int a =1;int b=2;int ret;
	ret = p[input](a,b);
	printf("%d",ret);
	return 0;
}
