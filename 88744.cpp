#include <stdio.h>
int main(){
    int arr[100];
    int i=0;
    while((scanf("%d",&arr[i]))>=0)
    {
    	i++;
	}
         i--;
    int count = i;
    if(count ==0)
          {
              printf("# # #\n");
          }
    else if(count==1)
          {
              printf("%d # #\n",arr[0]);
          }
    else if(count ==2)
          {
              if(arr[0]<arr[1])
                  printf("%d %d #\n",arr[1],arr[0]);
              else
                  printf("%d %d #\n",arr[0],arr[1]);
          }
    else
          {
              for(int i=0;i<count-1;i++)
              {
                  for(int j=0;j<count-1-i;j++)
                  {
                      int temp;
                      if(arr[j]<arr[j+1])
                      {
                          temp=arr[j];
                          arr[j]=arr[j+1];
                          arr[j+1]=temp;
                      }
                  }
              }
              printf("%d %d %d\n",arr[0],arr[1],arr[2]);
      }
    return 0;
}
