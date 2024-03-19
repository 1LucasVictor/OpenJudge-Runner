int main() {
	int n;
	int cnt1 = 0;
	int cnt2 = 0;
	scanf("%d", &n);
	while(n>=500){
		n -= 500;
		cnt1++;
	}
	while (n >= 5) {
		n -= 5;
		cnt2++;
	}
	int sum = 0;
	sum = 1000 * cnt1 + 5 * cnt2;
	printf("%d", sum);
	return 0;
}