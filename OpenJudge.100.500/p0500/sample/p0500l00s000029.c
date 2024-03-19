#include <stdio.h>
#include <stdbool.h>

int main(void) 
{

	int N,M;
	int a[3] = { -1, -1, -1 };
	int b[5][2];
	char c[3] = { 0, 0, 0 };
	int i;
	bool bFail;


	scanf("%d %d", &N, &M);
	for ( i = 0; i < M; i++ ) {
		scanf("%d %d", &b[i][0], &b[i][1]);
	}

	bFail = false;
	for ( i = 0; i < M; i++ ) {
		if ( a[b[i][0]-1] == -1 ) {
			a[b[i][0]-1] = b[i][1];
		} else {
			if ( a[b[i][0]-1] != b[i][1] ) {
				bFail = true;
				break;
			}
		}
	}

	if ( bFail ) {
		printf("-1\n");
		return 0;
	}

	switch(N) {
		case 1:
			if ( a[0] == -1 ) {
				printf("0\n");
				return 0;
			} else {
				printf("%d\n", a[0]);
				return 0;
			}
			break;

		case 2:
			if ( a[0] == 0 ) {
				printf("-1\n");
				return 0;
			} else if ( a[0] == -1 ) {
				printf("1");
			} else {
				printf("%d", a[0]);
			}
			if ( a[1] == -1 ) {
				printf("0\n");
			} else {
				printf("%d\n", a[1]);
			}
			break;

		case 3:
			if ( a[0] == 0 ) {
				printf("-1\n");
				return 0;
			} else if ( a[0] == -1 ) {
				printf("1");
			} else {
				printf("%d", a[0]);
			}
			if ( a[1] == -1 ) {
				printf("0");
			} else {
				printf("%d", a[1]);
			}
			if ( a[2] == -1 ) {
				printf("0\n");
			} else {
				printf("%d\n", a[2]);
			}
			break;

	}

	return 0;

}
