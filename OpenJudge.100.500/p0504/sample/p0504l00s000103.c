#include<stdio.h>
int main() {
	int H, A, i=1;
	scanf("%d%d", &H, &A);
	if(H <= A) printf("1\n");
	if(H > A) {
		if(H > A * i) {
			++i;
			H -= A * i;
		}	
	printf("%d\n", i+1);
	}
	return 0;
}
