//����Ӽ��˳��� 
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
void mune()
{
	printf("����1Ϊ�ӷ�������2Ϊ����������3Ϊ�˷�������4Ϊ����������0Ϊ�˳�"); 
}
int main(){
	int (*p[])(int,int)={0,add,sub,mul,div};
	mune();
    int input=0;
	do
	{
	    printf("���������ѡ��");
	    scanf("%d",&input);
	    if((input>=1&&input<=4))
	    {
	    	int a,b;
	    	printf("����������������\n");
	    	scanf("%d%d",&a,&b);
		    int ret = p[input](a,b);
		    printf("%d\n",ret);
		}
	    
	    	
		 
		else if(input == 0)
		
			
		 {
		 	printf("�˳�����\n");
		 }
		else 
		{
				printf("�˳�����\n");
		}
		
		 
		
	
	}
	while(input);
	return 0;
}
