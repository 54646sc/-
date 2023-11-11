#include <stdio.h>
#include <math.h>
int main(){
    int n;
    scanf("%d",&n);
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        sum+=pow(2,i);
    }
    printf("result = %d",sum);
    return 0;
}
