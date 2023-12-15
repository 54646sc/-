//快速排序
#include <stdio.h>
void hanshu(int *arr,int left,int right)
{
  int i,j;
  i=left;
  j=right;
  if(i>j)
  {
    return ;
  }
  int temp=arr[left];
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
      int a=arr[i];
      arr[i]=arr[j];
      arr[j]=a;
    }
  }
  arr[left]=arr[i];
  arr[i]=temp;
  hanshu(arr,left,i-1);
  hanshu(arr,i+1,right);
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
  hanshu(arr,0,n-1);
  for(i=0;i<n;i++)
  {
    printf("%d ",arr[i]);
  }

  return 0;
}