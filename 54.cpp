//将华氏温度转化为对应的摄氏温度。
#include <stdio.h>
int main(){
	int h,s;
	s=100;
	h=5*(s-32)/9;
	printf("h=%d,s=%d",h,s);
	return 0;
} 
