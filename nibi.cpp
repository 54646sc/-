#include <stdio.h>
int main(){
    int n;
    
    scanf("%d",&n);
    int a[n][n];
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int sum=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            sum+=a[i][j];
        }
    }
    int sub=0;
    for(j=0;j<n;j++)
    {
        sub+=a[n-1][j];
    }
    sum=sum-sub;
    int m=0;
    for(i=0;i<n-1;i++)
    {
        
        m+=a[i][n-1];
    }
    sum=sum-m;
    int count = 0;
    for(i=1;i<n-1;i++)
    {
        for(j=1;j<n-1;j++)
        {
            
            if(i+j==n-1)
            {
                count+=a[i][j];
            }
        }
        
    }
    sum=sum-count;
        printf("%d",sum);
    return 0;
}
