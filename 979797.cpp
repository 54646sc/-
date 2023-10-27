
#include <stdio.h>
#include <math.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[]={0};
    int i;
    for(i=0;n;i++)
    {
        arr[i]=n%6;
        n=n/6;
    }
    
    
    
    for(int j=i-1;j>=0;j--)
    {
        printf("%d",arr[j]);
    }
    
    return 0;
}
