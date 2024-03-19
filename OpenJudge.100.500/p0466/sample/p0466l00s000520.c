#include<stdio.h>

int main() {
	char id_bef[11];
	char id_aft[12];

	scanf("%s", id_bef);
	scanf("%s", id_aft);

	for (int i = 0;; i++) {
		if (id_bef[i] != id_aft[i]) {
			if (id_bef[i] == '\0')
				printf("Yes");
			else
				printf("No");
			break;
		}
	}

	return 0;
}