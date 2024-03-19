#include <stdio.h>
#include<string.h>

int main() {
	int a, b, k, i;
	scanf("%d", &k);
	scanf("%d %d", &a, &b);
	
	if(k>=a&&k<=b){
		printf("OK");
	}
	
	else if(a==0&&b==0){
		if(k==0){
			printf("OK");
		}
		else if(k>>0){
			printf("NG");
		}
	}
	
	else if(k<<a){
		for(i=a; i<=b; i++){
			if(i%k==0){
				printf("OK");
				break;
			}
		}	
	}
	
	else if(a>=0&&b>>a){
		for(i=a; i<=b; i++){
			if(i%k==0){
				printf("OK");
				break;
			}
			else{
				continue;
			}
		}
		printf("NG");	
	}
		
	return 0;
}

