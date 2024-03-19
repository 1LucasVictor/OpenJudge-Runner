#include <stdio.h>
int main(void){
	int k;
	int a, b;
	int flg = 0;
	scanf("%d", &k);
	scanf("%d", &a);
	scanf("%d", &b);
	for(int i=a; i<=b; i++){
		if(i%k == 0){
			flg = 1;
			break;
		}
	}
	if(flg == 0){
		printf("NG\n");
	}
	else {
		printf("OK\n");
	}
	return 0;
}