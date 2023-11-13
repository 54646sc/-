#include <stdio.h>
#include <string.h>
int main()
{
    char ch[9];
    scanf("%s",&ch);
    int num=strlen(ch);
    if(num==6)
    {
        printf("%c%c%c%c-%c%c",ch[0],ch[1],ch[2],ch[3],ch[4],ch[5]);
    }
    if(num==4)
    {
        if(((ch[0]-'0')*10+(ch[1]-'0')*1)<22)
        {
            printf("20%c%c-%c%c",ch[0],ch[1],ch[2],ch[3]);
        }
        else
        {
            printf("19%c%c-%c%c",ch[0],ch[1],ch[2],ch[3]);
        }
    }
    return 0;
}
