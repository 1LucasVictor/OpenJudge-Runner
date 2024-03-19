#include <stdio.h>
#include <stdlib.h>

int main(){
	int i,j=0,k,n,m;

	scanf("%d",&k);

	if(0<k && k<82){
		for(i=1; i<10; i++){
			n=k%i;
			m=k/i;
			if(n==0 && m<10){
				printf("Yes\n");
				j=1;
				break;
			}
		}
	}
	if(j=0){
		printf("No\n");
	}
}