#include <stdio.h>
int main(){
    int n;
    while((scanf("%d",&n))!=EOF)
    {
        
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    }
    
    return 0;
}
