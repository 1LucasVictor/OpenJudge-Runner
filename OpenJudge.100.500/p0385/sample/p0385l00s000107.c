int main(void)
{
	char number[1001];
	int sum,i;

	while (1) {
		scanf("%s", number);
		i = 0;
		sum = 0;

		while (number[i] != 0)
			sum += number[i++] - '0';

		if (!sum)	break;

		printf("%d\n", sum);
	}
	return 0;
}