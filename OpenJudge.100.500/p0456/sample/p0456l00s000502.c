int main(void) {
	char s[200000];
	char t[200000];
	int i = 0;
	int count = 0;
	scanf("%s", s);
	scanf("%s", t);
	while (s[i] != '\0') {
		if (s[i] != t[i]) {
			count++;
		}
		i++;
	}
	printf("%d\n", count);
	return 0;
}