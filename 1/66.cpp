#include <stdio.h>
void bubbleSort(int *p,int c)
{
    for(int i=0;i<c-1;i++)
    {
        for(int j=0;j<c-1-i;j++)
        {
            int temp;
            if(p[j]>p[j+1])
            {
                temp=p[j];
                p[j]=p[j+1];
                p[j+1]=temp;
            }
        }
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int i; 
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int* p=arr;
    bubbleSort(p,n);
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
