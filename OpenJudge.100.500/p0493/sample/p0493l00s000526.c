int main()
{
	int		A;
	int		hun;
	int		V = 0;
 	scanf("%d", &A);
	hun = A / 500;
	if (A % 500 != 0)
	{
		V = (A % 500) / 5;
	}
	printf("%d",(hun*1000)+(V*5));
	return 0;
}