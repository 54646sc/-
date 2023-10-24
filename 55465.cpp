#include <stdio.h>
long long beishu(long long a,long long b)
{
    long long temp;
    if(a<b)
    {
        temp=a;
        a=b;
        b=temp;
    }
    long long i=1;
    long long k=a;
    while(k%b)
    {
        i++;
        
        k=i*a;
    }
    return k;
}
long long yueshu(int a,int b)
{
    long long temp;
    if(a<b)
    {
        temp=a;
        a=b;
        b=temp;
    }
    while(a%b)
    {
        long long a0=a;
        a=b;
        b=a0%b;
    }
    return b;
}
int main(){
    long long a,b;
    scanf("%lld%lld",&a,&b);
    long long ret1 = beishu(a,b);
    long long ret2=yueshu(a,b);
    printf("%lld",ret2+ret1);
 
    return 0;
}

