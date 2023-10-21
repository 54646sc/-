//回调函数的计算机应用； 
#include <stdio.h>
int add(int x,int y)
{
	return x+y;
}
int sub(int x,int y)
{
	return x-y;
}
int mul(int x,int y)
{
	return x*y;
}
int div(int x,int y)
{
	return x/y;
}
void hanshu(int (*p)(int,int))
{
	int a,b;
	printf("请输入两个操作数：\n"); 
	scanf("%d%d",&a,&b);
	int ret =p(a,b);
	printf("%d\n",ret);
}
int main(){
	
	int input;
	do{
		printf("选择1为加，2为减，三为乘，4为除，0为退出\n");
		scanf("%d",&input);
	
	switch(input)
	{
		case 1:
			hanshu(add);
			break;
		case 2:
			hanshu(sub);
			break;
		case 3:
		    hanshu(mul);
		    break;
		case 4:
		    hanshu(div);
		    break;
		case 0:
		    printf("退出程序\n");
		    break;
		default:
		    printf("输入错误，请重新选择\n");	
		    break;
	}}
	while(input);
	
	return 0;
}
