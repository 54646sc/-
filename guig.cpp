#include <stdio.h>
int mmax(int arr[4])
{
    int max=arr[0];
    int rem=0;
    for(int i=1;i<4;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
            rem = i;
        }
    }
    return rem;
}
int mmin(int arr[4])
{
    int min=arr[0];
    int rem=0;
    for(int i=1;i<4;i++)
    {
        if(min>arr[i])
        {
            min=arr[i];
            rem = i;
        }
    }
    return rem;
}
int main(){
    int arr[4],zuidi,fazhi;
    scanf("%d%d%d%d%d%d",&arr[0],&arr[1],&arr[2],&arr[3],&zuidi,&fazhi);
    int max=mmax(arr);
    int min=mmin(arr);
    int count =0,remember=-1;
    for(int i=0;i<4;i++)
    {
        if(arr[i]<zuidi||arr[max]-arr[i]>fazhi)
        {
            count++;
            remember=i;
        }
    }
    if(arr[max]-arr[min]<=fazhi&&arr[min]>=zuidi)
    {
        printf("Normal\n");
    }
    else if(count == 1)
    {
        printf("Warning: please check #%d!\n",1+remember);
    }
    else
        printf("Warning: please check all the tires!\n");
    return 0;
}
