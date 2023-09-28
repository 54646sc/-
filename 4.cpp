#include <stdio.h> 
int main(){
	int a,b;
	b=0; 
	for(a=1000;a<=2000;a++)
	{
		if(a%4==0 && a%100!=0)
		    {
			printf("%d ", a);
			b++;
	}
	    else if(a%400==0)
	    {
		printf("%d ", a);
	    b++;}
	}
	printf("%d", b);
	
	return 0;
}
