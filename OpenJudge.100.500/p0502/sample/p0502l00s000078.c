#include<stdio.h>
#include<math.h>

int main() {
	int n;
	scanf("%d", &n);
	int x;
	int f = 0;
	int so = 0, sg = 0;
	while (n) {
		f = 0;
		scanf("%d", &x);
		if (x % 2 == 0) {
			so++;
			if (x % 3 == 0 || x % 5 == 0)
				sg++;
		}
		n--;
	}
	if (so == sg) {
		printf("APPROVED");
	}
	else
		printf("DENIED");
}
