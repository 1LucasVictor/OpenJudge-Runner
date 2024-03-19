#include<stdio.h>

int main(void){

	int n,i;
	int debt=100000;
	float percent = 0.05;
	int risi;
	double stac;

	scanf("%d",&n);

	for(i=0;i<n;i++){
		risi = debt*percent;
		if(risi%1000 == 0){
			debt = debt + risi;		
		}
		else{
			stac = risi%1000;
			risi = risi-stac+1000;
			debt = debt+risi;
		}
	}

	printf("%d\n",debt);


	return 0;
}