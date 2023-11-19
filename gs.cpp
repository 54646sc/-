#include <stdio.h>
#include <string.h>
int main()
{
    char a[10001],b[10001];
    gets(a);
    gets(b);
    for(int i=0;i<strlen(a);i++)
    {
        int k = 1;
        for(int j=0;j<strlen(b);j++)
        {
            if(a[i]==b[j])
            {
                k = 0;
                break;
            }
        }
        if(k) printf("%c",a[i]);
    }
}
