#include<stdio.h>
#define MAX 1000100

int main(void){
	int prime[MAX];
	int i,j,n,count;
	for(i=0;i<MAX;i++){
		prime[i]=1;
	}
	prime[0]=prime[1]=0;
	
	for(i=2;i<MAX;i++){
		for(j=2;i*j<MAX;j++){
			prime[i*j]=0;
		}
	}

	while((scanf("%d",&n))!=EOF){
		count=0; 
		for(i=0;i<n+1;i++){
			if(prime[i]==1){
				count++;
			}
		}
		printf("%d\n",count);
	}
	return 0;
}