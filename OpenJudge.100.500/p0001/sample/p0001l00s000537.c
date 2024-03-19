#include<stdio.h>

int main(){
	int A,B,C;
	while(scanf("%d %d",&A,&B)!=EOF){
		A+=B;
		C=0;
		while(A>=1){
			C++;
			A/=10;
		}
		printf("%d\n",C);
	}
	return 0;
}