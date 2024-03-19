#include<stdio.h>

int main(){

	int i,j,n;
	int item[5000],sum,Max;

	while(scanf("%d",&n)!=EOF){
		if(n==0) break;
		Max=0;
		i=0;
		while(i<n) scanf("%d",&item[i++]);

		for(i=0;i<n;i++){
			sum=0;
			for(j=i;j<n;j++){
				sum+=item[j];
				if(Max<sum) Max=sum;
				
			}
					
		}
		printf("%d\n",Max);


	}



	return 0;
}