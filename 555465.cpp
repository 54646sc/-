#include <stdio.h>
int main(){
    int n,i,c;
    char g;
    int w=0;
    scanf("%d\n", &n);
    for(i=1;i<=n;i++)
    {
        char a[13];
        char b[21];
        
        scanf("%s %s %d\n", &a, &b, &c);
        if(c>=85)
            g='A';
        else if(c>=70 && c<=84)
            g='B';
        else if(c<=60)
        {
        
            g='D';
            w++;}
        else
            g='C';
        printf("%s %s %c\n", a, b, g);

        
    }
    printf("%d", w);
    
    return 0;
}
