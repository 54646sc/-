#include <stdio.h>
int book[1001];
int main()
{
    int i,j,k,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&k);
        book[k]++;
    }
    for(i=0;i<=1000;i++)
    {
        for(j=0;j<book[i];j++)
        {
            printf("%d ",i);
        }
    }
    return 0;
}