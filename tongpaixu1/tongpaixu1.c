#include <stdio.h>
int arr[11];
int main()
{
    int i,j,t;
    
    for(i=0;i<10;i++)
    {
        scanf("%d",&t);
        arr[t]++;

    }
    for(i=10;i>=0;i--)
    {
        for(j=0;j<arr[i];j++)
        {
            printf("%d ",i);
        }
    }
    return 0;

}