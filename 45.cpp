#include <stdio.h>
struct stu
{
	char name[20];
	int age;
	char id[20];
};
int main(){
	struct stu s = {"xiaoxiao", 23, "556569"};
	struct stu* p=&s;
	printf("%d\n", (*p).age);
	printf("%s", p->id);
	
	return 0;
}
