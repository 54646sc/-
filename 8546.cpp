#include <stdio.h>
int main(){
int n;
scanf("%d",&n);

double arr[n];
for(int i=0;i<n;i++)
{
    scanf("%lf",&arr[i]);
}
double a=0;
for(int i=0;i<n;i++)
{
     a+=arr[i];
}
double b=a/n;
double max=arr[0];
for(int i=1;i<n;i++)
{
    if(max<arr[i])
    {
        max=arr[i];
    }
}
double min=arr[0];
for(int i=1;i<n;i++)
{
    if(min>arr[i])
    {
        min=arr[i];
    }
}
printf("%.2lf %.2lf %.2lf",max,min,b);
 return 0;
}
