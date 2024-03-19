#include<stdio.h>

int main (void){
	
	int m,i,s,t,a,b,n,sum;
	int matrix[100][100]={0},vector[100]={0};
	
	scanf("%d %d",&n,&m);
	
	for(i=0;i<n;i++){
		for(t=0;t<m;t++){
			
			scanf("%d",&a);
			matrix[i][t] += a;
		}
	}
	
	for(s=0;s<m;s++){
		scanf("%d",&b);
		vector[s] += b;
	}
	
	for(i=0;i<n;i++){
		sum = 0;
		for(t=0;t<m;t++){
			
		sum += matrix[i][t]*vector[t];
		}
	printf("%d\n",sum);
	}
	
return 0;
}