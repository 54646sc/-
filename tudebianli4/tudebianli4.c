#include <stdio.h>
struct node
{
    int x;
    int s;
};
int main()
{
    int n,m;
    int book[100]={0};
    int arr[100][100];
    struct node que[100];
    int qi,zh;
    scanf("%d%d%d%d",&n,&m,&qi,&zh);
    int i,j;
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
    int cur;
    que[tail].x=qi;
    que[tail].s=0;
    tail++;
    book[qi]=1;
    int flag=0;
    while(head<tail)
    {
        cur=que[head].x;
        for(i=1;i<=n;i++)
        {
            if(arr[cur][i]==1&&book[i]==0)
            {
                book[i]=1;
                que[tail].x=i;
                que[tail].s=que[head].s+1;
                if(que[tail].x==zh)
                {
                    flag=1;
                    break;
                }
                tail++;
            }
            
        }
        if(flag==1)
        {
            break;
        }
        head++;
    }
    printf("%d",que[tail].s);
    return 0;
}