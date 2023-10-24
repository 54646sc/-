#include <stdio.h>
int beishu(int a,int b)
{
    int temp;
    if(a<b)
    {
        temp=a;
        a=b;
        b=temp;
    }
    int i=1;
    int k=a;
    while(k%b)
    {
        i++;
        
		k=i*a;
    }
    return k;
}
int yueshu(int a,int b)
{
    int temp;
    if(a<b)
    {
        temp=a;
        a=b;
        b=temp;
    }
    while(a%b)
    {
    	int a0=a; 
        a=b;
        b=a0%b;
    }
    return b;
}
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    int ret1 = beishu(a,b);
    int ret2=yueshu(a,b);
    printf("%d",ret2+ret1);

    return 0;
}
