#include<stdio.h>
double fact(int n)

{
    double sum =1;
    for(int i=1;i<=n;i++)
    {
        sum*=i;
    }
    return sum;
}
int main(){
    int m,n;
    scanf("%d%d",&m,&n);
    double a=fact(n);
    double b=fact(m);
    double c=fact(n-m);
    double result = 1.0*a/b/c;
    printf("result = %.0lf",result);
    return 0;
}
