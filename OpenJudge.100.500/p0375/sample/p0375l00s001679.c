int main() {
	int n;
	scanf("%d", &n);
	for (int i =3; i <= n; i++) {
		int x = i;
		if (x % 3 == 0) {
			printf(" %d", i);
			continue;
		}
		for (; x; x /= 10) {
			if (x % 10 == 3) {
				printf(" %d", i);
				break;
			}
		}
	}
	putchar('\n');
}

