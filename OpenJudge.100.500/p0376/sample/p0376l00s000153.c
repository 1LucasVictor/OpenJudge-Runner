#include <stdio.h>

int main(){
	int p[100],i;
	int cnt;
	scanf("%d",&i);
	for(cnt=0;cnt<i;cnt++){
		scanf("%d",&p[cnt]);
	}
	for(cnt=1;cnt<=i;cnt++){
		printf("%d",p[i-cnt]);
		if(cnt<i){
			printf(" ");
		}
	}
	printf("\n");
	return 0;
}