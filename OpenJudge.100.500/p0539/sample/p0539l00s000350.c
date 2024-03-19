int main()
{
  int n;
  scanf("%d", &n);
  int i, j;
  for (i = 1; i <= 9; i++)
  {
    for (j = 1; j <= 9; j++)
    {
      if (i * j == n)
      {
        printf("Yes");
        return 0;
      }
    }
  }
  printf("No");
}