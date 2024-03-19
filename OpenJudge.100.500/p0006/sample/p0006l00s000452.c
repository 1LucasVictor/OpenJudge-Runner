#include <stdio.h>

int main(void)
{
	int mon,n;
	int i;
	
	mon = 100000;
	
	scanf("%d",&n);
	
	for(i = 1;i <= n;i++){
		mon *= 1.05;
			if(mon % 1000 != 0){
		    mon = mon - (mon % 1000) + 1000;
		}
	}

	printf("%d\n",mon);
	
	return(0);
}