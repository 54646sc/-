#include <stdio.h>
#include <math.h>
int pingfanghe(int n)
{
    int sum=0;
    int ret =n;
    while(ret)
    {
        int x=ret%10;
        ret=ret/10;
        sum=sum+pow(x,2);
    }
    return sum;
}
int main()
{
	int ret =pingfanghe(9);
	printf("%d",ret);
	return 0;
}
