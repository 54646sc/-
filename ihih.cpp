#include <stdio.h>
struct stu
{
    char xuehao[99];
    char name[99];
    int score;
};
int main(){
    int n;
    scanf("%d",&n);
    struct stu arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%s%s%d",&arr[i].xuehao,&arr[i].name,&arr[i].score);
    }
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i].score;
    }
    double average =1.0* sum/n;
    printf("%.2lf\n",average);
    for(int i=0;i<n;i++)
    {
        if(arr[i].score<average)
        {
            printf("%s %s %d\n",arr[i].xuehao,arr[i].name,arr[i].score);
        }
    }
    return 0;
}
