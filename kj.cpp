//ÄæÐò×Ö·û´® 
#include <stdio.h>
#include <string.h>
void hanshu(char*p)
{
	int left = 0;
	int right = strlen(p)-1;
	char e;
	while(left<right)
	{
		e=p[left];
		p[left]=p[right];
		p[right]=e;
		left++;
		right--;
	}
}
int main(){
	char arr[99];
	scanf("%s",&arr);
	hanshu(arr);
	printf("%s",arr);
	return 0;
}
