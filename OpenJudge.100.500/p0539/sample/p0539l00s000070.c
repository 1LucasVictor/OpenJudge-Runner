n, i;

main () {
	scanf("%d", &n);
	for(i=1;i<=9;i++) {
		if(n / i <=9 && (n/i)*i ==n) {
			puts("Yes");
			return 0;
		}
	}
	puts("No");
}