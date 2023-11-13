#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[11111]={0};
    int arrr[11111]={0};
    int x=0,a,b,c;
    for(int i=0;i<n;i++)
    {
        scanf("%d-%d %d",&a,&b,&c);
        arr[a]+=c;
        if(arr[a]>arrr[x])
        {
            x=a;
            arrr[x]=arr[a];
        }
    }
    printf("%d %d",x,arrr[x]);
    return 0;
}
