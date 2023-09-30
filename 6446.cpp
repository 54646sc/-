#include <stdio.h>
int main(){
    int n,i;
    int w=0;
    scanf("%d\n", &n);
    for(i=1;i<=n;i++)
    {
        char a[100]={};
        char b[200]={};
        int c;
        scanf("%s %s %d", &a, &b, &c);
        if(c>=85)
            printf("%s %s A\n", a, b);
        else if(c>=70 && c<=84)
            printf("%s %s B\n", a, b);
        else if(c<=60)
        {
        
            printf("%s %s D\n", a, b);
            w++;}
        else
            printf("%s %s C\n", a, b);
        

        
    }
    printf("%d", w);
    
    return 0;
}
