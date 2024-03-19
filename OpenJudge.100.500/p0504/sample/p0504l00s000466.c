#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int H;
	int A;

	scanf("%d %d\n", &H, &A);

	if(H < 1 || 10000 < H) {
		return 1;
	}
	if(A < 1 || 10000 < A) {
		return 1;
	}
	
  	int cnt = 0;
  	while(H > 0) {
      H -= A;
      cnt++;
    }
	printf("%d\n", cnt);
	return 0;
}