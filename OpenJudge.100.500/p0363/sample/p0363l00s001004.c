#include <stdio.h>


int main(void) {

	// 1_2-C Sorting Three Numbers
	int num[3];
	int i,j,wk;
	scanf("%d %d %d",&num[0],&num[1],&num[2]);

	for(i=2; 0<=i; i--){
		for(j=0; j<i; j++){
			if(num[j] > num[j+1]){
				wk = num[j];
				num[j] = num[j+1];
				num[j+1] = wk;
			}
		}
	}
	printf("%d %d %d\n",num[0],num[1],num[2]);
        return 0;
}