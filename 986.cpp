#include <stdio.h>
int main(){
	int i;
	float sum=0;
	int f=1;
	
	for(i=1;i<=100;i++)
	{
		sum+=f*1.0/i;
		f=-f;
		
		
	}
	printf("%f", sum);
	return 0;
}
