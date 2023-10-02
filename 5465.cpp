//猜数字游戏 
#include <stdio.h>

#include <time.h>
#include <stdlib.h>
void m()
{
	printf("#####################");
	printf("###1.play   0.stop###");
	printf("#####################");
 } 
 void game()
 {
 	int b, c;
 	b = rand()%100+1;
 	
 	while(1){
 		printf("猜一个数字：");
 	    scanf("%d", &c);
	 
 	if(b>c)
 	{
 		printf("猜小了\n");
 		
	 }
	 else if(b<c)
	 {
	 	printf("猜大了\n");
	 	
	 }
	 else
	 {
	 	printf("恭喜你对了\n");
	 	break;
	 }}
	 
 	
 	
 	
  } 
int main(){
	srand((unsigned int)time(NULL));
	int a;
	do
	{
	m();
	printf("请选择\n");
	scanf("%d", &a);
	switch(a)
	{
		case 1:
			game();
			break;
		case 0:
			printf("退出程序\n");
			break;
		default:
			printf("输入错误\n");
			break;
		}
	 } 
	 while(a);
	return 0;
}
