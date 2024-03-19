#include <stdio.h>

#define STATION_NUM 3

int main() {
	char S[STATION_NUM];
	short i, cnt = 0;

	scanf("%s", S);
	for (i = 0; i < STATION_NUM; i++) {
		if (S[i] == 'A') {
			cnt++;
		}
	}
	if (cnt == 0 || cnt == 3) {
		printf("No\n");
	} else {
		printf("Yes\n");
	}
	return 0;
}
