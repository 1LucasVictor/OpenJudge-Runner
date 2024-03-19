#include <stdio.h>
 
int main(void) {
	int n,i,m,k,h,j,t;
	scanf("%d",&n);
	for(i=1;i<n+1;i++){
		m=i%10;
		j=i*10;
		k=i%100;
		h=i%1000;
		t=i%10000;
		if(i%3==0){
			printf(" %d",i);
		}else if(m==3){
			printf(" %d",i);
		}else if(i/10==3){
			printf(" %d",i);
		}else if(k>29&&k<40){
				printf(" %d",i);
		}else if(299<h&&h<400){
			printf(" %d",i);
		}else if(2999<t&&t<4000){
			printf(" %d",i);
		}
	}
	printf("\n");
	return 0;
}
