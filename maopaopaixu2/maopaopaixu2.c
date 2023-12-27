#include <stdio.h>
struct student
{
    char name[22];
    int score;
};
int main()
{
    int i,j,n;
    scanf("%d",&n);
    struct student stu[n];
    for(i=0;i<n;i++)
    {
        scanf("%s%d",stu[i].name,&stu[i].score);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(stu[j].score>stu[j+1].score)
            {
                struct student a=stu[j];
                stu[j]=stu[j+1];
                stu[j+1]=a;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%s %d\n",stu[i].name,stu[i].score);
    }
    return 0;
}