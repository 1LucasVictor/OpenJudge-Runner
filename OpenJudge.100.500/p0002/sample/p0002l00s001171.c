#include<stdio.h>

int main(){
	int N;
	int A,B,C;
	for(scanf("%d",&N);N>=1;N--){
		scanf("%d %d %d",&A,&B,&C);
		if(A*A==B*B+C*C||B*B==A*A+C*C||C*C==A*A+B*B)
			printf("YES\n");
		else	
			printf("NO\n");
	}
	return 0;
}