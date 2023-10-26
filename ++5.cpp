#include <stdio.h>
int main(){
    double a;
    double b;
    scanf("%lf%lf",&a,&b);
    double c=a/(b*b);
    if(c>=18.5&&c<=23.9)
    {
        printf("Normal\n");
    }
    else 
    {
        printf("Abnormal\n");
    }
    
    return 0;
}
