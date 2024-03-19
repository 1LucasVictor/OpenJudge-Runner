#include <stdio.h>
int main(void)
{
	int n,i;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		if(i%10==3||i%3==0||i%100/10==3||i%1000/100==3||i%10000/1000==3){
			printf(" %d",i);
	    }
	}
	putchar('\n');
	return 0;
}
