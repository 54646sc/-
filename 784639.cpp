#include <stdio.h>
int main(){
	 int x, y,z;
	 for(x=100;x<=200;x++)
	 {
	 	for(y=2;y<x;y++)
	 	{
	 		if(x%y==0)
	 		{
	 			break;
			 }
		 }
		 if(x==y)
		 {
		 	printf("%d ", x);
		 	z++;
		 }
		 
	 	
	 }
	 printf("%d", z);
	return 0;
} 
