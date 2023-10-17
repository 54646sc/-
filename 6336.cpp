#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
    int i=0;
    int arr[n]={0};
    for(i=0;i<n;i++)
    {
    	scanf("%d",&arr[i]);
	}
	int min=arr[0];
	int re;
	for(i=1;i<n;i++)
	{
		if(min>arr[i])
		{
			min=arr[i];
			re=i;
		}
	}
	int w;
	w=arr[i];
	arr[i]=arr[0];
	arr[0]=w;
    
    int k;
    printf("%d ",arr[0]);
    for(k=1;k<n;k++)
    {
    	printf("%d ",arr[k]+min); 
	}

    return 0;
}
