//�ص������ļ����Ӧ�ã� 
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
	printf("������������������\n"); 
	scanf("%d%d",&a,&b);
	int ret =p(a,b);
	printf("%d\n",ret);
}
int main(){
	
	int input;
	do{
		printf("ѡ��1Ϊ�ӣ�2Ϊ������Ϊ�ˣ�4Ϊ����0Ϊ�˳�\n");
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
		    printf("�˳�����\n");
		    break;
		default:
		    printf("�������������ѡ��\n");	
		    break;
	}}
	while(input);
	
	return 0;
}
