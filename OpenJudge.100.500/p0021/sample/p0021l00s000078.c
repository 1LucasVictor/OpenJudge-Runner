#include<stdio.h>

int main(void){
	int n,sum,max,i,j,data[5005];
	while(1){
		scanf("%d",&n);
		if(n==0){break;}
		for(i=0;i<n;i++){
			scanf("%d",&data[i]);
		}
		max=data[0];
		for(i=0;i<n-1;i++){
			sum=0;
			for(j=i;j<n;j++){
				sum=sum+data[j];
				if(max<sum){max=sum;}
			}
		}
	printf("%d\n",max);
	}
	return 0;
}