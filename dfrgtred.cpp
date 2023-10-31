#include <stdio.h>
int main(){
    int n;
    while((scanf("%d",&n))!=EOF)
    {
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n-i+1;j++)
            {
                printf(" ");
            }
            for(int k=1;k<=i;k++)
            {
                printf("* ");
            }
            printf("\n");
        }
        for(int i=0;i<n+1;i++)
        {
            printf("* ");
        }
        printf("\n");
        
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=i;j++)
            {
                printf(" ");
            }
            for(int k=1;k<=n+1-i;k++)
            {
                printf("* ");
            }
            printf("\n");
        }
    }
    return 0;
}
