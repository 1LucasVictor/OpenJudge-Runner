#include<stdio.h>

int main(void) {
	int X, A, B;
	char buf[128];
	
	fgets(buf,128,stdin);
	sscanf(buf,"%d %d %d",&X,&A,&B);
	
	if(X < B - A) {
		printf("dangerous");
	} else {
		if(A < B) {
			printf("safe");
		} else {
			printf("delicious");
		}
	}
	printf("\n");
	
	return 0;
}