#include <stdio.h>
int main(){
	int a = 5;
	
	if(a<18)
	    printf("未成年\n");
	else if(a>=18 && a<28)
	    printf("青年\n");
	else
	    printf("壮年或者老年\n"); 
	return 0;
}
