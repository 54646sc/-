//ÄæÐò×Ö·û´® 
#include <stdio.h>
#include <string.h>
void hanshu(char*p)
{
	char* left=p;
	char* right =p+strlen(p)-1;
	char e;
	while(left<right)
	{
		e=*left;
		*left=*right;
		*right=e;
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
