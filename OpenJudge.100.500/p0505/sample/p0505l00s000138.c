#include <stdio.h>

int main(){
	int H,N,A;
	scanf("%d %d",&H,&N);
	for(int i=0;i<N;i++){
		scanf("%d",&A);
		H -= A;
		if( H<=0 ){ printf("Yes"); return 0; }
	}
	printf("No");
	return 0;
}
