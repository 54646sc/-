#include <stdio.h>
#include <string.h>
int erfenchazhao(int *arr,int len,int x)
{
    int left=0;
    int right=len-1;
    while(left<=right)
    {
        int mid=(left+right)/2;
        if(arr[mid]==x)
        {
            return mid;
        }
        else if(arr[mid]<x)
        {
            left=mid+1;
        }
        else
        {
            right=mid-1;
        }

    }
    return -1;
}
int main()
{
    int arr[]={0,6,9,14,15,19,50};
    int x;
    int len=sizeof(arr)/sizeof(arr[0]);
    scanf("%d",&x);
    int ret=erfenchazhao(arr,len,x);
    if(ret==-1)
    {
        printf("查无此数\n");
    }
    else
    {
        printf("%d的下标为%d\n",x,ret);
    }
    return 0;
}