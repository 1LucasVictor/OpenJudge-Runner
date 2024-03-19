int main()
{
  long n, m, k;
  scanf("%ld %ld %ld", &n, &m, &k);
  long a[n], b[m], i, x = 0, y = 0;
  for (i = 0; i < n; i++)
    scanf("%ld", &a[i]);
  for (i = 0; i < m; i++)
    scanf("%ld", &b[i]);
  long sum = 0;
  for (i = 0; sum <= k; i++)
  {
    if (x < n && y < m)
    {
      if (a[x] <= b[y])
      {
        sum += a[x];
        x++;
      }
      else
      {
        sum += b[y];
        y++;
      }
    }
    else if (x < n)
    {
      sum += a[x];
      x++;
    }
    else if (y < m)
    {
      sum += b[y];
      y++;
    }
    else
      break;
  }
  if (sum > k)
    x--;
  printf("%ld", x + y);
}