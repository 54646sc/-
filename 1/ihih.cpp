#include <stdio.h>
int main(){
    int arr[10];
    for(int i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    int *p=arr+1;
    int max=arr[0];
    int min=arr[0];
    for(int i=1;i<10;i++)
    {
        if(*p>max)
        {
            max=*p;
        }
        p++;
    }
    p=arr+1;
    for(int i=1;i<10;i++)
    {
        if(*p<min)
        {
            min=*p;
        }
        p++;
    }
    printf("difference value = %d",max-min);
    return 0;
}
