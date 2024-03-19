#include <stdio.h>

int main(void){
	int i,n,j,k;
	int cards[4][13];
	char smark[2];
	int mark,num;

	for(j=0;j<4;j++){
		for(k=0;k<13;k++){
			cards[j][k]=0;
		}
	}

	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s %d",&smark,&num);

		if(smark[0] =='S') {
			mark=0;
		}
		if(smark[0] =='H') {
			mark=1;
		}
		if(smark[0] =='C') {
			mark=2;
		}
		if(smark[0] =='D') {
			mark=3;
		}
		for(j=0;j<4;j++){
			for(k=0;k<13;k++){
				if((j==mark) && (k==num-1) ){
					cards[j][k]=1;
				}
			}
		}
	}

	for(j=0;j<4;j++){
		for(k=0;k<13;k++){
			if(cards[j][k]==0){
				if(j==0) {
					smark[0] ='S';
				}
				if(j==1) {
					smark[0] ='H';
				}
				if(j==2) {
					smark[0] ='C';
				}
				if(j==3) {
					smark[0] ='D';
				}
				printf("%s %d\n",smark, k+1);
			}
		}
	}

	return 0;
}