#include<stdio.h>

int main(void)
{
	int a,n;
	int debt = 100000;
	
	scanf("%d",&n);
	
	for(a = 0 ; a < n ; a++){
		debt *= 1.05;
		if(debt % 1000){
			debt /= 1000;
			debt++;
			debt *= 1000;
		}
	}
	
	printf("%d\n",debt);
	
	return 0;
}