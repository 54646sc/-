#include <stdio.h>
#include <math.h>
int s(int n)
{
	int j;
	
	for(j=2;j<n;j+=2)
	{
		if(n%j==0)
		break;
		
	}
	if(j>=n)
	return 1;
}
int main(){
	int k,i;
	
	for(i=100;i<=200;i++)
	{
		
		k=s(i);
		if(k==1)
		printf("%d ", i);
		
	}
	return 0;
}
