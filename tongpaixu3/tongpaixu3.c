#include <stdio.h>
int book[1001];
int main()
{
    int i,t,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&t);
        book[t]=1;
    }
    for(i=1;i<=1000;i++)
    {
        if(book[i]==1)
        {
            printf("%d ",i);
        }
    }
    return 0;
}