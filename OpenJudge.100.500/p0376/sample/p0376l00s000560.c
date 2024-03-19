#include<stdio.h>


int main(void){

	int n, day[101];
	scanf("%d\n", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &day[i]);
	}
    for (int i = n - 1; i >= 0; i--) {
    	printf("%d", day[i]);
		if(i) printf(" ");
    }
	printf("\n");

    return 0;
}
