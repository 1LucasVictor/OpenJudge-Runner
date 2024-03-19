#include<stdio.h>
int main(void){
	int i,n,x;
	scanf("%d",&n);
	for(i = 3;i <= n;i++){
		if((i % 3) == 0){
			printf(" %d",i);
			continue;
		}
		else if((i % 10) == 3){
			printf(" %d",i);
			continue;
		}
		else{
			x = i;
			while(x != 0){
				if(((x /= 10) % 10) == 3){
					printf(" %d",i);
				}
			}
		}
	}
	puts("");
	return 0;
}