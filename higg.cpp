#include <stdio.h>
int main(){
    char arr[19];
    int flag=1;
    int z[11]={0,1,2,3,4,5,6,7,8,9,10};
    char m[11]={1,0,'X',9,8,7,6,5,4,3,2};
    int jai[17]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
    int n;
    scanf("%d",&n);
    gets(arr);
    int j;
    for(int i=0;i<n;i++)
    {
        gets(arr);
        for(j=0;j<17;j++)
        {
            if(arr[j]>'9'||arr[j]<'0')
            {
                puts(arr);
                flag=-1;
                break;
            }
            
        }
        if(j>=17)
        {
            int sum=0;
            for(int k=0;k<17;k++)
            {
                sum+=(arr[k]-'0')*jai[k];
            }
            sum=sum%11;
            if((arr[17]-'0')!=m[sum])
            {
                puts(arr);
                flag=-1;
            }
        }
    }
    if(flag==1)
    {
        printf("All passed\n");
    }
    return 0;
}
