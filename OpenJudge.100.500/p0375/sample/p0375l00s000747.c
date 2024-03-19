#include <stdio.h>
int main(void){
	int n,x,i=1;
	scanf("%d",&n);
	for(i=1;i<=n;){
		x=i/10;
		x=(x==0)?i:x;
		if(i%3==0){
			printf(" %d",i);
			i++;
		}
		else if(i%10==3||x%10==3){
			printf(" %d",i);
			i++;
		}
		else i++;
	}
	printf("\n");
	return 0;
}

