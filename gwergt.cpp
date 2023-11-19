
#include <string.h>
#include <stdio.h>
void shanchu(char* arr1,int j,int len1)
{
    for(int i=j;i<len1-1;i++)
    {
        arr1[i]=arr1[i+1];
    }
    arr1[len1-1]='\0';
    len1--;
}
int main(){
    char arr1[10000+1];
    char arr2[10000+1];
    gets(arr1);
    gets(arr2);
    int len1=strlen(arr1);
    int len2=strlen(arr2);
    for(int i=0;i<len2;i++)
    {
        for(int j=0;j<len1;j++)
        {
            if(arr2[i]==arr1[j])
            {
                shanchu(arr1,j,len1);
                
                
            }
        }
    }
    puts(arr1);
    return 0;
}
