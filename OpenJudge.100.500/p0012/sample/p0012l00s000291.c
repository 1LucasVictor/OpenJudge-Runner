#include <stdio.h>

int main(){
	int stuck[10];
	int i,carCnt=0,input;
	for(i=0;i<10;i++){
		stuck[i]=0;
	}
	
	while(scanf("%d",&input)!=EOF){
		if(input==0){
			carCnt--;
			printf("%d\n",stuck[carCnt]);
			stuck[carCnt]=0;
		}else{
			stuck[carCnt]=input;
			carCnt++;
		}
	}
	
	return 0;
}