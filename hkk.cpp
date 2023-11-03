#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int count = 0;
    for(int i=0;i<n;i++)
    {
        int a;
        char name[20];
        int score;
        scanf("%d%s%d",&a,&name,&score);
        if(score>=90)
        {
            printf("%03d %s S",a,name);
            count++;
        }
        else if(score<70)
        {
            printf("%03d %s C",a,name);
        }
        else if(score>=80&&score<90)
		{
			printf("%03d %s A",a,name);
		 } 
		 else
            printf("%03d %s B",a,name);
        printf("\n");
    }
    printf("%d",count);
    return 0;
}
