//��������Ϸ 
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
 		printf("��һ�����֣�");
 	    scanf("%d", &c);
	 
 	if(b>c)
 	{
 		printf("��С��\n");
 		
	 }
	 else if(b<c)
	 {
	 	printf("�´���\n");
	 	
	 }
	 else
	 {
	 	printf("��ϲ�����\n");
	 	break;
	 }}
	 
 	
 	
 	
  } 
int main(){
	srand((unsigned int)time(NULL));
	int a;
	do
	{
	m();
	printf("��ѡ��\n");
	scanf("%d", &a);
	switch(a)
	{
		case 1:
			game();
			break;
		case 0:
			printf("�˳�����\n");
			break;
		default:
			printf("�������\n");
			break;
		}
	 } 
	 while(a);
	return 0;
}
