//计算加减乘除； 
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
	printf("输入1为加法，输入2为减法，输入3为乘法，输入4为除法，输入0为退出"); 
}
int main(){
	int (*p[])(int,int)={0,add,sub,mul,div};
	mune();
    int input=0;
	do
	{
	    printf("请做出你的选择：");
	    scanf("%d",&input);
	    if((input>=1&&input<=4))
	    {
	    	int a,b;
	    	printf("请输入两个操作数\n");
	    	scanf("%d%d",&a,&b);
		    int ret = p[input](a,b);
		    printf("%d\n",ret);
		}
	    
	    	
		 
		else if(input == 0)
		
			
		 {
		 	printf("退出程序\n");
		 }
		else 
		{
				printf("退出程序\n");
		}
		
		 
		
	
	}
	while(input);
	return 0;
}
