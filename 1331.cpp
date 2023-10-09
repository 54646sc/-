    #include <stdio.h>
    int main(){
        int arr[24]={0};
        int i;
        int sz=24;
        for(i=0;i<sz;i++)
        {
            scanf("%d", &arr[i]);
            
        }
        int a;
        do
        {
            scanf("%d", &a);
            if(arr[a]>50 && a<=23 && a>=0)
            {
                printf("%d Yes\n", arr[a]);
            }
            else if(arr[a]<=50 && a<=23 && a>=0)
            {
                printf("%d No\n", arr[a]);
            }
            else
			{
				break;
			 } 
           
        }
        while(a<=23&&a>=0);
        return 0;
    }
