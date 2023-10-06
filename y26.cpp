#include <stdio.h>
int nstrlen(char* p)
{
	int count =0;
	while(*p!='\0
	')
	{
		count++;
		p++;
	}
	return count;
 } 
void nixu(char arr[])
{
	int left=0;
	int right=nstrlen(arr)-1;
	while(left<right)
	{
		char temp =arr[left];
		arr[left]=arr[right];
		arr[right]=temp;
		left++;
		right--;
	}
}
int main(){
	char arr[]="enikncd";
	nixu(arr);
	printf("%s", arr);
	return 0;
}
