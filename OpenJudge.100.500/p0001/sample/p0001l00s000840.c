#include <stdio.h>

int main(){
	int unsigned a,b,sum=0;
	int i,j;
	while(scanf("%u %u",&a,&b)!=EOF){
		sum=a+b;
		for(i=1000000000,j=10;i>=1;i/=10,j--){
			if(sum>=i){
				printf("%d\n",j);
				break;
			}
		}
		if(sum==0){
			printf("1\n");
		}
	}
}