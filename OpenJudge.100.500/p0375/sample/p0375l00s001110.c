#include <stdio.h>
int main (void)
{
	int n;
	int a=1;
	scanf("%d",&n);
	for(a=1;a<=n;a++){
		if(a % 3 == 0 || a % 10 == 3){
			printf(" %d",a);
		}
	}
		printf("\n");
		return 0;
}