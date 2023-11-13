#include <stdio.h>
#include <math.h>
int main(){
    int a,b;
    int x;
    scanf("%d%d",&a,&b);
    if(a%2==0)
    {
        x=a*pow(2,b/2);
        
        printf("0 %d",x);
    }
    else
    {
        x=a*pow(2,b/2);
        printf("1 %d",x);
    }
    return 0;
}
