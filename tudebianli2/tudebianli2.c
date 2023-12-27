#include <stdio.h>
int main()
{
    int book[100]={0};
    int i,j,n,m;
    int arr[100][100];
    int que[100];
    int cue;
    scanf("%d%d",&n,&m);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==j)
            {
                arr[i][j]=0;
            }
            else
            {
                arr[i][j]=99999;
            }
        }
    }
    for(i=0;i<m;i++)
    {
        int a,b;
        scanf("%d%d",&a,&b);
        arr[a][b]=1;
        arr[b][a]=1;
    }
    int head=1;
    int tail=1;
    que[tail]=1;
    tail++;
    book[1]=1;
    int flag=0;
    while(head<tail)
    {
        for(i=1;i<=n;i++)
        {
            cue=que[head];
            if(arr[cue][i]==1&&book[i]==0)
            {
                book[i]=1;
                que[tail]=i;
                tail++;
            }
            if(tail>n)
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
        {
            break;
        }
        head++;
    }
    for(i=1;i<tail;i++)
    {
        printf("%d ",que[i]);
    }
    return 0;
}