#include <stdio.h>

int main(void) {
	int L,R,min = 2019;
	scanf("%d%d",&L,&R);
	if((R-L)>=2019){
		printf("0\n");
		return 0;
	}
	L%=2019;
	R%=2019;
	if(L>=R){
		R += 2019;
	}
	for(int i=L; i<R; i++){
		for(int j=i+1; j<=R; j++){
			if((i*j)%2019 <= min){
				min = (i*j)%2019;
			}
			if(min == 0){
				printf("0\n");
				return 0;
			}
		}
	}
	printf("%d\n",min);
	return 0;
}
