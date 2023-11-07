#include <stdio.h>
int main(){
    char ch[80];
    int offset;
    gets(ch);
    scanf("%d",&offset);
    int i=0;
    while(ch[i]!='\0')
    {
        if(ch[i]>='a'&&ch[i]<='z')
        {
            if(offset>=0)
            {
                ch[i]=(ch[i]-'a'+offset)%26+'a';
            }
            else
            {
                ch[i]=(ch[i]-'a'+offset+26)%26+'a';
            }
        }
        else if(ch[i]<='Z'&&ch[i]>='A')
        {
            if(offset>=0)
            {
                ch[i]=(ch[i]-'A'+offset)%26+'A';
            }
            else{
                ch[i]=(ch[i]-'A'+offset+26)%26+'A';
            }
        }
    }
    puts(ch);
    return 0;
}
