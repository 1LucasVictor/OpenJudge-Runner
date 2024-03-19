#include<stdio.h>

main()
{
	int n;
	int i;
	int S[13]={};
	int H[13]={};
	int C[13]={};
	int D[13]={};
	
	scanf("%d",&n);
	
	char m;
	int num;
	
	for(i=0;i<n;i++){
		scanf(" %c %d",&m,&num);
		if(m == 'S'){
			S[num-1]=1;
		} else if(m == 'H'){
			H[num-1]=1;
		} else if(m == 'C'){
			C[num-1]=1;
		} else if(m == 'D'){
			D[num-1]=1;
		}
	}
	
	for(i=0;i<13;i++){
		if(S[i]==0){
			printf("S %d\n",i+1);
		}
	}
	
	for(i=0;i<13;i++){
		if(H[i]==0){
			printf("H %d\n",i+1);
		}
	}
	
	for(i=0;i<13;i++){
		if(C[i]==0){
			printf("C %d\n",i+1);
		}
	}
	
	for(i=0;i<13;i++){
		if(D[i]==0){
			printf("D %d\n",i+1);
		}
	}
	
	return 0;
}
	