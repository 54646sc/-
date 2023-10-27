#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    
    int fenmu=1;
    double sum=0;
     
    for(int i=1;i<=n;i++)
    {
        sum+=1.0/fenmu;
       
       
    int f=0;int fla=1;
    for(int j=1;j<=i+1;j++)
    {
        f+=fla*(2*j-1);
        fla=-fla;
    }
        fenmu=f;
    }
    printf("%.3lf",sum);
    return 0;
}
