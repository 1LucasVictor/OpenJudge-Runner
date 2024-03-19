#include <stdio.h>

int main() {
	int i, j, hita = 4, hitb = 4, hitx = 4, hity = 4, cont = 0;
	char S[6];

	scanf("%s", &S);
	
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			if (hita != i && hitb != i && hitx != i && hity != i) {
				if (i != j && S[i] == S[j]) {
					if (cont == 0) {
						hita = i;
						hitb = j;
					} else {
						hitx = i;;
						hity = j;
					}
					cont++;
				}
			}
		}
	}

	printf(cont == 2 ? "Yes\n" : "No\n");

	return 0;
}