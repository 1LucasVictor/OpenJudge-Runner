int t_mult(int a, int b)
{
	if(a >= 1 && a <= 9
			&& b >= 1 && b <= 9 ) {
		return a*b;
	}

	return -1;
}

int main(void)
{
	int A, B;

	scanf("%d %d", &A, &B);

	printf("%d", t_mult(A, B));

	return 0;
}