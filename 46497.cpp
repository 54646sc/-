//十进制转六进制 
#include <stdio.h>
int hanshu(int n)
{
    int k;
    while(n)
    {
        k=n%10;
        
        if(k==9)
        {
            return 1;
            break;
        }
        n=n/10;
    }
    if(n==0)
    {
        return 0;
    }
}
int main(){
    int count =0;
    for(int i=1;i<=2019;i++)
    {
        int ret =hanshu(i);
        if(ret == 1)
        {
            count ++;
        }
    }
    printf("%d",count);
    return 0;
}
