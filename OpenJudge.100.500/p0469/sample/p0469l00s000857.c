#include <stdio.h>

int main() {
	int a, b, k, i;
	
	scanf("%d", &k);
	scanf("%d %d", &a, &b);
	
	for(i=a; i<=b; i++){
		if(i%k==0){
			printf("OK");
			break;
		}
		else if(b-a<k&&i%k!=0){
			printf("NG");
			break;
		}	
		else{
			continue;
		}
	}
	
	return 0;
}