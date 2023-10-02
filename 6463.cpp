#include <stdio.h>
#include <math.h>
int main(){
	 int x, y,z;
	 for(x=100;x<=200;x++)
	 {
	 	for(y=2;y<=sqrt(x);y++)
	 	{
	 		if(x%y==0)
	 		{
	 			break;
			 }
		 }
		 if(y>sqrt(x))
		 {
		 	printf("%d ", x);
		 	z++;
		 }
		 
	 	
	 }
	 printf("%d", z);
	return 0;
} 
