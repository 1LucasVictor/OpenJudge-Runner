#include<stdio.h>

int main(void){
	
	
	int cars_state[30];	
	int i,j,k,zero_c,other_c;
	
	zero_c=other_c=0;
	
	for(i=0;i<30;i++){
		cars_state[i]=99;
	}
	
	k=0;
	while(scanf("%d",&cars_state[k])!=EOF&&k<=20 ){
		k++;
	}
	
	while(zero_c<20){
			for(i=0;i<k;i++){
				if(cars_state[i]==0&&cars_state[i-1]!=99){
					printf("%d\n",cars_state[i-1]);
					for(j=i;j<k;j++){
						cars_state[j-1]=cars_state[j+1];
					}
				break;
			}
			zero_c++;
		}
	}
}