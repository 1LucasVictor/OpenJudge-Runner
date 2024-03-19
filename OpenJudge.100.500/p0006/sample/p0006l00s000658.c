#include <stdio.h>

int main(void){
	int deb = 100000;
	int rest;
	int n;
	int i;

	scanf("%d", &n);

	for(i = 0 ; i < n ; i++){
		deb *= 1.05;
		rest = deb % 1000;
		if(rest != 0){
			deb -= rest;
			deb += 1000;
		}
	}

	printf("%d\n", deb);

	return 0;
}