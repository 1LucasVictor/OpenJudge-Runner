#include <stdio.h>
int main(){

	int N;
	scanf("%d",&N);

	int M0=100000;
	int n;

	for(n=0;n<N;n++){
		M0=M0+0.05*M0;
		if(M0%1000)M0=M0-M0%1000 +1000;
	}

	printf("%d\n",M0);
	return 0;
}