#include<stdio.h>
int main(void){
	int S[13]={0};
	int H[13]={0};
	int C[13]={0};
	int D[13]={0};
	int n,i,k;
	char c;
	scanf("%d",&n);
	
	for( i = 0;i <= n;i++){
		scanf("%c %d\n",&c,&k);
		if(c == 'S')
		S[k-1] = 1;
		if(c == 'H')
		H[k-1] = 1;
		if(c == 'C')
		C[k-1] = 1;
		if(c == 'D')
		D[k-1] = 1;
		
	}
	for(i = 0;i < 13;i++){
		if(S[i] == 0)
		printf("S %d\n",i + 1);
	}
		for(i = 0;i < 13;i++){
		if(H[i] == 0)
		printf("H %d\n",i+ 1);
	}
		for(i = 0;i < 13;i++){
		if(C[i] == 0)
		printf("C %d\n",i + 1);
	}
		for(i = 0;i < 13;i++){
		if(D[i] == 0)
		printf("D %d\n",i + 1);
	}
	return 0;
}
