#include<stdio.h>

int main(void){
	
	int n,S[100000],q,T[100000],i,j,C=0;

	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d", &S[i]);	
	}
	
	scanf("%d",&q);
	for(i=0;i<q;i++){
		scanf("%d",&T[i]);
	}
	
	for(i=0;i<n;i++){
		
		for(j=0;j<q;j++){
			if(S[i]==T[j])C++;
			}
		
	}
	
	printf("%d\n",C);
	
	return 0;}
	
	
	