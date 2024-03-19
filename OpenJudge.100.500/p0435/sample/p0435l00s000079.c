int main()
{
  int n, d;
  scanf("%d %d", &n, &d);
  long x[n], y[n];
  int i, cnt = 0;
  for (i = 0; i < n; i++)
  {
    scanf("%ld %ld", &x[i], &y[i]);
    if (sqrt(x[i] * x[i] + y[i] * y[i]) <= d)
      cnt++;
  }
  printf("%d", cnt);
}