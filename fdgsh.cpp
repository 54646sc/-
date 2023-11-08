#include <stdio.h>
struct dan
{
    char name[20];
    char day[20];
    char gender;
    char guhua[20];
    char shouji[20];
};
int main(){
    int n;
    scanf("%d",&n);
    struct dan arr[50];
    for(int i=0;i<n;i++)
    {
        scanf("%s%s%c%s%s",&arr[i].name,&arr[i].day,&arr[i].gender,&arr[i].guhua,&arr[i].shouji);
    }
    int a;
    char ch[90];
    gets(ch);
    scanf("%d",&a);
    int b;
    for(int i=0;i<a;i++)
    {
        scanf("%d",&b);
        if(b<=n-1&&b>=0)
        {
            printf("%s %s %c %s %s\n",arr[b].name,arr[b].guhua,arr[b].shouji,arr[b].gender,arr[b].day);
        }
        else
        {
            printf("Not Found\n");
        }
    }
    
    return 0;
}
