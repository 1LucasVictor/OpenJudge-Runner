#include <stdio.h>

int main(){
	int n;
	int i;
	scanf("%d",&n);
	for(i=1; i<n+1; i++){
		if(i % 3 == 0 || i % 10 == 3){
			printf(" %d",i);
		}
	}
	printf("\n");
}