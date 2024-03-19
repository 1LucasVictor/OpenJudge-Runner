#include <stdio.h>

int main() {
	int H,N;
	scanf("%d %d", &H, &N);
	for(int i = 0;i < N;i++){
		int x;
		scanf("%d", &x);
		H-=x;
	}
	if(H <= 0)puts("Yes");
	else puts("No");
	return 0;
}