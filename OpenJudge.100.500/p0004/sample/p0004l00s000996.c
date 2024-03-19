#include <stdio.h>

int main(void){
	int m,n,M,N;
	int GCD,LCM;
	
	while(scanf("%d %d", &m,&n) != EOF){
	M=m,N=n;

	while(m!=n){
		if(m>n) m-=n;
		else n-=m;
	};
	GCD=m;
	LCM=GCD*(M/m)*(N/n);
	
	printf("%d %d\n",	GCD, LCM);
	};
	return (0);
}