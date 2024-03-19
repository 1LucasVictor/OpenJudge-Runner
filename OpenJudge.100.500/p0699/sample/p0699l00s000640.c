#include<stdio.h>
int main() {
	int a=0, b=0,c=0;
	while (a<1 || a>10) {
		scanf("%d", &a);

	}

	while (b<1 || b>10) {
		scanf("%d", &b);

	}
	while (c<1 || c>10) {
		scanf("%d", &c);

	}
	if (a == 7 && b == 5 && c == 5) {
		printf("YES\n");
	}

	else if (a == 5 && b == 7 && c == 5) {
		printf("YES\n");
	}

	else if (a == 5 && b == 5 && c == 7) {
		printf("YES\n");

	}

	else {
		printf("NO\n");
	}



	return 0;
}