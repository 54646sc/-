#include <stdio.h>
typedef struct stu
{
	char name[20];
	short age;
	char tele[12];
	char sex[5];
}stu;
void print(stu s)
{
	printf("%s\n", s.name);
	printf("%d\n", s.age);
	printf("%s\n", s.sex);
	printf("%s\n", s.tele);
}
void printp(stu* p)
{
	printf("%d\n", (*p).age);
	printf("%s\n", p->name);
}
int main(){
	stu s={"ÕÅÈı", 20, "65654666", "ÄĞ"};
	print(s); 
	printp(&s);
	return 0;
} 
