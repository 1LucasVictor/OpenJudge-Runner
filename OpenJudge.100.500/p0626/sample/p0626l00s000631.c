#include <stdio.h>

int main(void) {
	int d,n,i,p=1;
	scanf("%d %d",&d,&n);
	for(i=0;i<d;i++){
		p=p*100;
	}
	if(n==100)n=101;
	printf("%d",p*n);
	return 0;
}
