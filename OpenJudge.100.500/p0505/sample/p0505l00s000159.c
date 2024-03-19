#include <stdio.h>
#include<math.h>
#include<stdlib.h>

int main(void){
	int h,n,i,j,a;
	int asum=0;
	scanf("%d %d", &h,&n);

	for (i = 0; i < n; i++) {
		scanf("%d",&a);
		asum += a;
	}
	if(asum >= h) {
		printf("Yes");
	}
	else {
		printf("No");
	}
	
	return 0;
}