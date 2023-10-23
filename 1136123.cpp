#include <stdio.h>
#include <math.h>
int main(){
double a,b,c;
scanf("%lf%lf%lf",&a,&b,&c);
double x=(a+b+c)/2;
double y=sqrt(x*(x-a)*(x-b)*(x-c));
printf("circumference=%.2lf area=%.2lf",2*x,y);

    return 0;
}


