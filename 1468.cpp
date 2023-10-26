//解二元一次方程 
#include <stdio.h>
#include <math.h>
int main(){
    double a,b,c;
    while((scanf("%lf%lf%lf",&a,&b,&c))!=EOF)
    {
        if(a==0)
    {
        printf("Not quadratic equation\n");
    }
    else {
    double jj=b*b-4*a*c;
    if(jj==0)
    {
        double ll=-b/2.0/a;
        if(ll==-0.00)ll=0.00;
        printf("x1=x2=%.2lf\n",ll);

    }
    else if(jj>0)
    {
        printf("x1=%.2lf;x2=%.2lf\n",((-b-sqrt(jj))/2.0/a),((-b+sqrt(jj))/2.0/a));
    }
    else {
    printf("x1=%.2lf-%.2lfi;x2=%.2lf+%.2lfi", -b / (2*a),sqrt(-jj ) / (2*a),-b / (2*a),sqrt(-jj) / (2*a));
    }
    
    }
    }
    return 0;
}

