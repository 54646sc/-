#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=1;i<=n;i++)
    {
        printf("#%d\n",i);
        int ret =n;
        int count =0;
        int k=i;
        for(int j=1;j<=arr[i-1]*10;j++)
        {
            printf("%d",k);
            if(ret ==1)
            {
                k+=2;
            }
            else
            {
                k+=ret;
            }
            if(j%10!=0)
            {
                printf(" ");
            }
            else
            {
                ret =n;
                printf("\n");
                count++;
                for(int x=0;x<n;x++)
                {
                    if(count>=arr[x])
                    {
                        ret--;
                    }
                }
            }
        }
    }
    return 0;
}
