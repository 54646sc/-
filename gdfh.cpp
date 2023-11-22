#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int x=0;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&x);
        sum+=x;
    }
    printf("%d",sum);
    return 0;
}
