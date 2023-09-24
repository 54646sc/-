//输出0到100内的所有奇数 
#include <stdio.h>
int main(){
	int i = 0;
    
	while(i<=100)
	{
		if(i%2 == 1)
		    printf("%d ", i);
		i++;
	}
	return 0;
} 
