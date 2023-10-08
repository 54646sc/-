//×Ö·û´®¿½±´,×Ô¶¨Òå¿âº¯Êýstrcpy 
#include <stdio.h>
#include <string.h>

void my_strcpy(char* a, char* b)
{
	while(*b!='\0')
	{
		*a=*b;
		a++;
		b++;
		
	}
	*a=*b;
}
int main(){
	char arr1[10]="feih";
	char arr2[10]="hu";
	my_strcpy(arr1, arr2);
	printf("%s", arr1);
	return 0;
} 
