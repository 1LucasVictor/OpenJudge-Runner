#include<stdio.h>
int main(void){
	int rank,n,i,S[14]={0},H[14]={0},C[14]={0},D[14]={0},j;
	char kind;

	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s %d",&kind,&rank);
		getchar();
    	if(kind=='S'){
			S[rank]=1;
    	}
    	if(kind=='H'){
      		H[rank]=1;
    	}
    	if(kind=='C'){
      		C[rank]=1;
    	}
    	if(kind=='D'){
      		D[rank]=1;
		}
	}
	
	for(j=1;j<=13;j++){
		if(S[j]==0){
			printf("S %d\n",j);
		}
	}
	for(j=1;j<=13;j++){
		if(H[j]==0){
			printf("H %d\n",j);
		}
	}
	for(j=1;j<=13;j++){
		if(C[j]==0){
			printf("C %d\n",j);
		}
	}
	for(j=1;j<=13;j++){
		if(D[j]==0){
			printf("D %d\n",j);
		}
	}
	
	return 0;
}