#include <stdio.h>
struct wanjia 
{
    char id[10];
    char name[82];
    int ceng;
};
int main(){
    int n;
    scanf("%d",&n);
    struct wanjia wan[10];
    int count=0;
    for(int i=0;i<n;i++)
    {
        scanf("%s%s%d",&wan[i].id,&wan[i].name,&wan[i].ceng);
    }
    for(int i=0;i<n;i++)
    {
        if(wan[i].ceng>=90&&wan[i].ceng<=100)
        {
            printf("%s %s S\n",wan[i].id,wan[i].name);
            count ++;
        }
        else if(wan[i].ceng>=80&&wan[i].ceng<=89)
        {
            printf("%s %s N\n",wan[i].id,wan[i].name);
        }
        else if(wan[i].ceng>=70&&wan[i].ceng<=79)
        {
            printf("%s %s G\n",wan[i].id,wan[i].name);
        }
        else
        {
            printf("%s %s C\n",wan[i].id,wan[i].name);
        }
    }
    printf("%d",count);
    return 0;
}
