int main(int argc, char const *argv[])
{
	int a, b, c;
	char s[101];

//	scanf("%d", &a);
//	scanf("%d", &b);
//	scanf("%d", &c);
	scanf("%s", &s);

//	printf("%d ", a+b+c);
//	printf("%s\n", s);

	a = 0;
	for (int i = 0; i < 3; ++i)
	{
		if (s[i] == '1')
		{
			a++;
		}
	}

	printf("%d\n", a);



	return 0;
}