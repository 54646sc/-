#include <stdio.h>
int a(int n){
	if(n%4==0&&n%100!=0 || n%400==0)
	return 1;
	else
	return 0;
} 
int main(){
	int i;
	for(i=1000;i<2000;i++)
	{
		if(1==a(i))
		printf("%d ", i);
	}
	return 0;
}
