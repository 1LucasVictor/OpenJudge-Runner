#include<stdio.h>
#include<string.h>

#define MAX 500

int main() {

	char W[MAX];
	int i, length, h, m;

	while (1) {

		scanf("%s", W);
			if (W[0] == '-') break;

		scanf("%d", &m);

		length=strlen(W);

		for (i = 0; i < m; i++) {
			scanf("%d", &h);

			strncpy(&W[length], W, h);
			strncpy(W, &W[h], length);

			W[length] = '\0';
		}

		printf("%s\n", W);

		i++;
	}

	return 0;

}

