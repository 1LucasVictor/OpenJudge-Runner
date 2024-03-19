#include <stdio.h>

int main() {
	int a, b, k, i;
	scanf("%d", &k);
	scanf("%d %d", &a, &b);
	
	if(a==0&&b==0){
		if(k==0){
			printf("OK");
		}
		else if(k>>0){
			printf("NG");
		}
	}
	
	else if(a>=0&&b>>0){
		for(i=a; i<=b; i++){
			if(i%k==0){
				printf("OK");
				break;
			}
			else if(i>=a&&i<=b){
				printf("OK");
				break;
			}
			else{
				continue;
			}
		}	
	}
	
	return 0;
}