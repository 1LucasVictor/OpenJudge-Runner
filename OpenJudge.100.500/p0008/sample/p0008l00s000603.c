#include<stdio.h>

int main(){
	
	int limit, prime, ans, i, j;
	int box[99999];
	
	while(scanf("%d",&limit) != EOF){
		
		ans = 0;
		prime = 0;
		j = 0;
		
		while(prime <= limit){
			
			for(i = 0; i < prime; i++){
				
				if(prime <= 1){
					
					goto B;
					
				}else if(prime == 2){
					
					box[ans] = prime;
					ans++;
					goto B;
					
				}
				j = 0;
				while(j < ans){
				if(prime % box[j] == 0){
					
					goto B;
					
				}
				j++;
			}
			box[ans] = prime;
			ans++;
			}
			B:
			prime++;
		}
		
		printf("%d\n", ans);
		
	}
		
    return 0;
}