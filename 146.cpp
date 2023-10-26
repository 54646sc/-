#include <stdio.h>
int main(){
    int arr[10];
    for(int i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    int c1=0,c2=0;
    for(int i=0;i<10;i++)
    {
        if(arr[i]>0)
        {
            c1++;
        }
        if(arr[i]<0)
        {
            c2++;
        }
    }
    printf("positive:%d\nnegative:%d",c1,c2);
    return 0;
}
