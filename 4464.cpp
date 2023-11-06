#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d",&n);
    char ch[80];
    char ah[80];
    scanf("%s",ch);
    for(int i =0;i<n-1;i++)
    {
        scanf("%s",ah);
        if((strlen(ch))<(strlen(ah)))
        {
            strcpy(ch,ah);
        }
    }
    printf("The longest is: %s",ch);
    
    return 0;
}
