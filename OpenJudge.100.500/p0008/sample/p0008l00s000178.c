#include<stdio.h>
int prime[1000000];
int count[1000000];


int main(){
	
	int n=0, i ,k;
	
	for(i =2 ; i <1000000; i++){
		prime[i] = 1;
		
	}
	for( i =2; i*i<1000000; i++){
		if(prime[i] == 1){
			for(k= 2*i ; k<1000000; k += i){
				prime[k] = 0;
			}
		}
	}
	
	for( i = 0; i< 1000000 ; i++){
		count[i+1] = count[i] + prime[i];
	}

	while(1){

		if(scanf("%d",&n) == EOF){
			break;
		}
		
		printf("%d\n",count[n+1]);
	}

	return 0;
}
	