#include<stdio.h>

int main(void){

	int n,i,maney=100000;

	scanf("%d",&n);

	for(i=0;i<n;i++){
		maney+=maney*0.05;
		maney=((maney+900)/1000);
		maney=maney*1000;
	}

	printf("%d\n",maney);
	scanf("%d",&i);
	return 0;
}