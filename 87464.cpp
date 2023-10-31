//¥Ú”°k 
#include <stdio.h>
int main(){
    int n;
    while((scanf("%d",&n))!=EOF)
    {
        for(int i=1;i<=n;i++)
        {
            for(int j=n;j>=i-1;j--)
            {
                printf("* ");
            }
            printf("\n");
        }
        printf("*\n");
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=i+1;j++)
            {
                printf("* ");
            }
            printf("\n");
        }
    }
    return 0;
}
