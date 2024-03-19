#include <stdio.h>
int main(void){
	int n;
	scanf("%d",&n);
	int i;
	for(i=1;i<=n;i++){
		int x;
		x = i;
		if(x%3==0){
			printf(" %d",i);
		}else{
			while(1){
				if(x%10==3){
				printf(" %d",i);
				break;
				}else if(x==0){
					break;
				}else{
					x = x/10;
				}
			}
		}
	}
	printf("\n");
	return 0;
}