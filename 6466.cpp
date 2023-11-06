#include <stdio.h>
#include <string.h>
int main(){
    int n;
    scanf("%d",&n);
    char ch[80];
    char a[66];
    gets(a);
    for(int i= 0;i<n;i++)
    {
    	
        gets(ch);
        int shuzi=0,yinwenzimu=0,dian=0,other=0;
        int len = strlen(ch);
        if(len<6)
        {
            printf("Your password is tai duan le.\n");
        }
        else
        {
            char *p=ch;
            for(int i=0;i<len;i++)
            {
                if((*p)>='a'&&(*p)<='z'||(*p)>='A'&&(*p)<='Z')
                    yinwenzimu=1;
                else if((*p)=='.')
                    dian=1;
                else if((*p)<='9'&&(*p)>='0')
                    shuzi=1;
                else
                    other=1;
                p++;
            }
                if(other==1)
                {
                    printf("Your password is tai luan le.\n");
                }
                else if(yinwenzimu==1&&shuzi==0)
                {
                    printf("Your password needs shu zi.\n");
                }
                else if(yinwenzimu==0&&shuzi==1)
                {
                    printf("Your password needs zi mu.\n");
                }
                else
                    printf("Your password is wan mei.\n");
            
        }
    }
    return 0;
}
