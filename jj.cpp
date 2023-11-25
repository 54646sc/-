#include <stdio.h>
int main()
{
	double arr[5][5];
	for(int i=0;i<5;i++)
	
	{
		for(int j=0;j<5;j++)
		{
			scanf("%lf",&arr[i][j]);
			
		}
		double average=0;
		for(int j=0;j<5;j++)
		{
			average+=arr[i][j];
			
			
		}
		for(int j=0;j<5;j++)
		{
			printf("%.1lf ",arr[i][j]);
		}
		printf("%.1lf\n",average);
	}
	return 0;
}
