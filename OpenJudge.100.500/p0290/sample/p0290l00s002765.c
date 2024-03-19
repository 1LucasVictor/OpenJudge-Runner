int main(void) {
	int i,j,n, m[10000],count=0;
	j = 0;

	scanf("%d",&n);
	
	for (i = 0; i < n; i++) scanf("%d",&m[i]);
	while (1) {
		while (1) {
			if (m[j] < 2)
				break;
			else if (m[j] == 2) {
				count++;
				break;
			}

			if (m[j] % 2 == 0)
				break;

			for (i = 3; i <= m[j] / i; i += 2)
				if (m[j] % i == 0)
					break;

			count++;
			break;

		}
		if (j < n)
			j++;
		else
			break;

	}
	printf("%d\n", count);
	return 0;
}