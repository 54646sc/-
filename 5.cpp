#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a,b=0,c,d;
    for(int i=1;i<=n;i++)
    {
        a=i;
        while(a)
        {
            c=a%10;
            a/=10;
            b=c+b*10;
        }
        if(b==i)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}
