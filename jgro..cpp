//дһ�����򣬰�Сд��ĸȫ��ת���ɴ�д��ĸ
#include <stdio.h>
#include <ctype.h>
int main(){
	char arr[99]="I am your father, do you know?";
	int i=0;
	while(arr[i])
	{
		if(islower(arr[i]))
		{
			arr[i]=toupper(arr[i]);
		}
		i++;
	  }  
	puts(arr);
	return 0;
}
