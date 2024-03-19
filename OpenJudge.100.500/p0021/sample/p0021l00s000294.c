#include<stdio.h>

int main(){

	int i,n;
	long item[5000],sum,sumMax,sumMin;

	while(scanf("%d",&n)!=EOF){
		if(n==0) break;
		sumMin=0;
		sumMax=0;
		sum=0;

		for(i=0;i<n;i++){
			scanf("%ld",&item[i]);
			if(i==0){
				sum+=item[i];
				if(sumMax<item[i]) sumMax=item[i];
				else if(sumMin>item[i]) sumMin=item[i];
			}
			else{
				sum+=item[i];
				if(sumMax<sum) sumMax=sum;
				else if(sumMin>sum) sumMin=sum;
			}
					}
		
		printf("%ld\n",sumMax-sumMin);


	}



	return 0;
}