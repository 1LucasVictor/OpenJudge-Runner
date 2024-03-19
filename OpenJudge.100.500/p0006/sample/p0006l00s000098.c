#include <stdio.h>
int main(){
	int i, n, money = 100000;
	scanf("%d", &n);
	while(n--){
		money *= 1.05;
		money += 999;
		money /= 1000;
		money *= 1000;
	}
	
	printf("%d\n", money);
	
	return 0;
}