#include <stdio.h>
int main(){
    double a,b;
    scanf("%lf %lf",&a,&b);
    
    double c;
    for(int i=0;i<a;i++)
    {
        
        scanf("%lf",&c);
        if(c<b)
        {
            printf("On Sale! %.1lf\n",c);
        }
    }
    return 0;
}
