#include <stdio.h>
#include <stdlib.h>

int main() {
	int x, y, yes = 0;
	scanf("%d%d", &x, &y);
	for (int i = 0; i <= x; i++) {
		if (2 * i + 4 * (x - i) == y){
			printf("Yes");
			yes = 1;
		}
	}
	if (yes == 0)printf("No");
}