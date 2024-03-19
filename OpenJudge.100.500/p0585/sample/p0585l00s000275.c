#include <stdio.h>

int main() {
	int A,B,T;
	scanf("%d %d %d",&A,&B,&T);
	double t = (double)T + 0.5;
	int cnt = 0;
	for (int i = 1; ; i++) {
		if (A*i > t) break;
		cnt += B;
	}
	printf("%d\n",cnt);
	return 0;
}