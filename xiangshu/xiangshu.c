#include <stdio.h>
int main()
{
    int i,j,n,m;
    scanf("%d %d",&n,&m);
    int arr1[n][m];
    int arr2[n][m];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&arr1[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&arr2[i][j]);
        }
    }
    int count=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(arr1[i][j]==arr2[i][j])
            {
                count++;
            }
        }
    }
    printf("%.2lf",100.0*1.0*count/n/m);
    return 0;
}