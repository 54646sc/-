#include <stdio.h>
#include <stdlib.h>
struct stu
{
	int age;
	char name[66];
};
int cmp(const void*a,const void*b)
{
	return ((struct stu*)a)->age-((struct stu*)b)->age;
}
int main()
{
	struct stu s[3]={{33,"fgus"},{6,"sd"},{46,"df"}};
	int sz=sizeof(s)/sizeof(s[0]);
	qsort(s,sz,sizeof(s),cmp);
	
	return 0;
}
