#include <stdio.h>
int main(void){
	int a,b,c,i,j,k,n[101][101],m[101][101];
	long sum;

	scanf("%d %d %d",&a,&b,&c);
	for(i=0;i<a;i++){
		for(j=0;j<b;j++){
			scanf("%d",&n[i][j]);
		}
	}
	for(i=0;i<b;i++){
		for(j=0;j<c;j++){
			scanf("%d",&m[i][j]);
		}
	}
	for(i=0;i<a;i++){
		for(j=0;j<c;j++){
			for(k=0;k<b;k++){
				sum += m[k][j]*n[i][k];
				if(k == b-1){
					printf("%ld",sum);
					if(j != c-1)
						printf(" ");}
			}
			sum=0;
		}
		printf("\n");
	}
	return 0;
}