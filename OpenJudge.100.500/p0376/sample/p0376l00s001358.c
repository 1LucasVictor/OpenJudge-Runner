int main() {
	int n, a[100];
	scanf("%d", &n);
	int i;
	for (i = 0; i < n; i++) {
		scanf("%d", a + i);
	}
	for (; i; i--) {
		printf("%d", a[i-1]);
		putchar((i > 1) ? ' ' : '\n');
	}
}
