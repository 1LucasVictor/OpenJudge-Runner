#include<stdio.h>

int main (void){
	
	int n,m,l,i,t,a,b,k;
	int arrayA[100][100]={},arrayB[100][100]={},arrayAB[100][100]={};
	
	scanf("%d %d %d",&n,&m,&l);
	
	for(i=0;i<n;i++){
		for(t=0;t<m;t++){
			scanf("%d",&a);
			arrayA[i][t] = a;
		}
	}
	
	for(i=0;i<m;i++){
		for(t=0;t<l;t++){
			scanf("%d",&b);
			arrayB[i][t] = b;
		}
	}
	
	for(i=0;i<n;i++){
		for(t=0;t<l;t++){
			for(k=0;k<m;k++){
				arrayAB[i][t] += arrayA[i][k]*arrayB[k][t];
			}
		printf("%d",arrayAB[i][t]);
		if(t != l-1){
			printf(" ");
		}else{
			printf("\n");
		}
		}
	}

return 0;
}
	