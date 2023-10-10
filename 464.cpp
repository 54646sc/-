#include <stdio.h>
int main(){
	char* p[5];
	char* (*a)[5]=&p;
	return 0;
}
