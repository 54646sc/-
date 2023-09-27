//º∆À„ 
#include <stdio.h>

int main(){
	int n, i ,x, y;
	y=0;
    x=1;
	for(n=1;n<=3;n++)
	{
		x=1;
		for(i=1;i<=n;i++)
		{
			x=x*i;
			
		}
		
		y=y+x;
		
	}
	printf("%d", y);
	return 0;
} 
