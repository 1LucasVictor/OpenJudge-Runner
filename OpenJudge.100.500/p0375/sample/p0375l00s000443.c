#include <stdio.h>

int main(){
	int n;
	int num=0;
	int i;

	scanf("%d",&n);
	for(i=3; i<=n; i++){
		if(i%3==0)
			printf(" %d",i);
		else {
			num = i;
			while(1){
				if(num == 0)
					break;
				if(num%10 == 3){
					printf(" %d",i);
					break;
				} else {
					num = num/10;
				}
			}
		}
	}
	printf("\n");

	return 0;
}