#include <stdio.h>
struct s 
{
	int a : 2;
	int b : 5;
	int c : 10;
	int d : 30;
};
int main(){
	struct s ar;
	ar.a=3;
	printf("%d",ar.a);
	return 0;
} 
