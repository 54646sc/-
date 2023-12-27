#include <stdio.h>
#include <string.h>
int main()
{
    int i;
    char arr[99];
    char p[99];
    gets(arr);
    int len=strlen(arr);
    for(i=0;i<len/2;i++)
    {
        p[i]=arr[i];
    }
    int flag=1;
    int j=len-1;
    for(i=0;i<len/2;i++)
    {
        if(p[i]==arr[j])
        {
            j--;
        }
        else
        {
            flag=0;
            break;
        }
    }
    if(flag==0)
    {
        printf("不是回文字符串\n");
    }
    else
    {
        printf("是回文字符串\n");
    }
    return 0;

}