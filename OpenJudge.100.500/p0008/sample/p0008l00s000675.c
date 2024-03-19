#include<stdio.h>

int main(void){
	int count=0;
	int x;
	int i,j;
	while(scanf("%d",&x)!=EOF){
		for(i=2;i<=x;i++){
			for(j=2;j<=i;j++){
				if(j==i) count++;
				if(i%j==0) break;
			}
		}
		printf("%d\n",count);
		count=0;
	}
	
	return 0;
}