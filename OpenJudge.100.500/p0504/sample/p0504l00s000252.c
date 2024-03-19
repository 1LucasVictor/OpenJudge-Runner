#include <stdio.h>

int main() {
	int H, A, i, ans=1;
	scanf("%d %d", &H, &A);
	for (i = 0; i < 10000; i++) {
		H = H - A;
		if (H <= 0) {
			break;
		}
		ans++;
	}
  
	printf("%d",ans);

	return 0;
}