#include <stdio.h>
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int arr[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int k;
    scanf("%d",&k);
    for(int i=0;i<k;i++)
    {
        char ch;
        getchar();
        scanf("%c",&ch);
        int a,b;
        scanf("%d%d",&a,&b);
        if(ch=='r')
        {
            int x[m];
            for(int u=0;u<m;u++)
            {
                x[u]=arr[a-1][u];
                arr[a-1][u]=arr[b-1][u];
                arr[b-1][u]=x[u];
            }
        }
        if(ch=='c')
        {
            int y[n];
            for(int p=0;p<n;p++)
            {
                y[p]=arr[p][a-1];
                arr[p][a-1]=arr[p][b-1];
                arr[p][b-1]=y[p];
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}