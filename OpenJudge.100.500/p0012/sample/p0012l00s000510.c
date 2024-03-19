#include <stdio.h>

int main(void)
{
	int a[10], b[10] , c;
	int i=0,tra=0;	

	do{
		scanf("%d",&c);
		if (c >= 1 && c <= 10){	
			a[tra] = c;		
			tra++;				
		}
		else if (c == 0){		
			tra--;		
			b[i] = a[tra];	
			i++;
		}

	} while (tra > 0);	

	for (c = 0; c < i; c++){	
		printf("%d\n",b[c]);
	}
	return 0;
}