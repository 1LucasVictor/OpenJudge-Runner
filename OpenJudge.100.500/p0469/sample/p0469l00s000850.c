#include <stdio.h>

int main(){
	
	int a, b, k, i;
	
	scanf("%d", &k);
	scanf("%d %d", &a, &b);
	
	for(i = 0; i <= b - a; i++){
		if((b-i)%k== 0){
			printf("OK");
			break;
		}else if((b-i)%k != 0){
			continue;
		}else{
			printf("NG");
			break;
		}
	}
}
