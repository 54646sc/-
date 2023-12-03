#include <stdio.h>
long long jiecheng(int x)
{
    long long sum=1;
    for(int i=1;i<=x;i++)
    {
        sum*=i;
    }
    return sum;
}
long long suanshu(int n,int m)
{
    long long a=jiecheng(n);
    long long b=jiecheng(m);
    long long c=jiecheng(n-m);
    return a/b/c;
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("    1\n");
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
                        printf("%5lld",suanshu(i, j));
        }
        printf("\n");
    }
    return 0;
}