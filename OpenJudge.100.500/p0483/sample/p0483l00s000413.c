#include<stdio.h>
int main(){
	int N;
	scanf("%d",&N);
	if(N/100==7||(N-N/100*100)/10==7||N%10==7){
		printf("Yes");
	}else{
		printf("No");
	}
}