#include <stdio.h>
int main(){
	int w = 0;
	scanf("%d", &w);
	switch(w)
	{
	case 1:
	case 2:
	case 3:
	case 4:	
	case 5:
	    printf("工作日\n");
		break;
	case 6:
	case 7:
	    printf("休息日\n");
		break; 
	default:
	    printf ("输入错误\n");
	}
	return 0;
} 
