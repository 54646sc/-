#include <stdio.h>
void quicksort(int *arr,int left,int right)
{
    if(left>right)
    {
        return;
    }
    int i,j,temp;
    temp=arr[left];
    i=left;
    j=right;
    while(i<j)
    {
        while(i<j&&arr[j]>=temp)
        {
            j--;
        }
        while(i<j&&arr[i]<=temp)
        {
            i++;
        }
        if(i<j)
        {
            int a=arr[j];
            arr[j]=arr[i];
            arr[i]=a;
        }
    }
    arr[left]=arr[i];
    arr[i]=temp;
    quicksort(arr,left,i-1);
    quicksort(arr,i+1,right);
}
int main()
{
    int i,n;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    quicksort(arr,0,n-1);
    printf("%d ",arr[0]);
    for(i=1;i<n;i++)
    {
        if(arr[i]!=arr[i-1])
        {
            printf("%d ",arr[i]);
        }
    }
    return 0;
}