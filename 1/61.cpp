#include <stdio.h>
int main(){
    int a;
    double j,k;
    char ch;
    
    scanf("%lf %d %c %lf",&j,&a,&ch,&k);
    printf("%c %d %.2lf %.2lf",ch,a,j,k);
    return 0;
}
