#include <stdio.h>
#include <stdlib.h>

int main() {
	int A, B, C;
	int flag;

	flag = 0;
	scanf("%d %d %d", &A, &B, &C);

	if (A == 5) {
		if (B == 5) {
			if (C == 7) {
				flag = 1;
			}
		} else if (B == 7) {
			if (C == 5) {
				flag = 1;
			}
		}
	} else if (A == 7) {
		if (B == 5) {
			if (C == 5) {
				flag = 1;
			}
		}
	}

	if(flag==1){
		printf("YES\n");
	}
	else{
		printf("NO\n");
	}

	return 0;
}
