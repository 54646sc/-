#include <stdio.h>
struct huiyuan
{
    char ka[99];
    char name[99];
    int qian;
    
};
int main(){
    int n;
    scanf("%d",&n);
    struct huiyuan arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%s%s%d",&arr[i].ka,&arr[i].name,&arr[i].qian);
        
    }
    int count =0;

    for(int i=0;i<n;i++)
    {
        if(arr[i].qian>=10000)
        {
            count ++;
            printf("%s %s S\n",arr[i].ka,arr[i].name);
        }
        else if(arr[i].qian>=5000&&arr[i].qian<=9999)
        {
            printf("%s %s B\n",arr[i].ka,arr[i].name);
        }
        else if(arr[i].qian>=1000&&arr[i].qian<=4999)
        {
            printf("%s %s C\n",arr[i].ka,arr[i].name);
        }
        else
        {
            printf("%s %s D\n",arr[i].ka,arr[i].name);
        }
    }
    printf("%d",count);
    return 0;
}
