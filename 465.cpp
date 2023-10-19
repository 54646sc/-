#include <stdio.h>
struct stu
{
	char name[55];
	int age;
 }; 
int main(){
	struct stu s={"zhangshan",31};
	printf("%d",s.age);
	printf("%s",s.name);
	return 0;
}
