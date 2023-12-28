#include <stdio.h>
void xuanzhesort(int *arr,int n)
{
    int i,j;
    int min=999999;
    int flag;
    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            if(arr[j]<min)
            {
                min=arr[j];
                flag=j;
            }
            
        }
        arr[flag]=arr[i];
            arr[i]=min;
            min=999999;
    }
    
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    xuanzhesort(arr,n);
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}