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
	    printf("������\n");
		break;
	case 6:
	case 7:
	    printf("��Ϣ��\n");
		break; 
	default:
	    printf ("�������\n");
	}
	return 0;
} 
