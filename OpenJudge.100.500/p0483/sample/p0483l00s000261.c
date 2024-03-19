#include <stdio.h>

int main() {
	int n,n100,n10,n1;
	scanf("%d", &n);
	n100 = n / 100;
	n10 = (n - n100*100) / 10;
	n1 = n % 10;

	if(n100==7||n10==7||n1==7){
		printf("Yes");
	}
	else {
		printf("No");
	}
}