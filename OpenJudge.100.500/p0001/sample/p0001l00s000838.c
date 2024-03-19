#include<stdio.h>

void calcNumberOfDigit(int num) {
	int count = 1;
	while(num/10 != 0) {
		count++;
		num /= 10;
	}
	printf("%d\n", count);
}

int main(void) {
	int i, a[200], b[200];
	while(scanf("%d %d",&a,&b)!=EOF) {
		calcNumberOfDigit(a[i] + b[i]);	
	}
	return 0;
} 