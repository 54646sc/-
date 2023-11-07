#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int count=0;
    for(int i=0;i<n;i++)
    {
        int id;
        char name[20];
        int cengshu;
        
        scanf("%06d%s%d",&id,name,&cengshu);
        if(cengshu>=90&&cengshu<=100)
        {
            printf("%06d %s S\n",id,name);
            count ++;
        }
        else if(cengshu>=80&&cengshu<=89)
        {
            printf("%06d %s N\n",id,name);
        }
        else if(cengshu>=70&&cengshu<=79)
        {
            printf("%06d %s G\n",id,name);
        }
        else
        {
            printf("%06d %s C\n",id,name);
        }
    }
    printf("%d",count);
    return 0;
}
