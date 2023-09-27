#include <stdio.h>
#include <string.h>
int main(){
	int i = 0;
	char password[20
	] = {0};
	printf("输入密码\n");
	
	for(i=0;i<3;i++)
	{
		scanf("%s", password);
		if(strcmp(password, "123456") == 0)
		{
		
		    printf("成功\n");
		    break;}
		else
		{
		
		    printf("登录失败\n");}
		 
	}
	if(i==3)
	    printf("账户锁定\n"); 
	return 0;
} 
