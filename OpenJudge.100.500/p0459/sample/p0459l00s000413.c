int main()
{
  int x, y;
  scanf("%d %d", &x, &y);
  int turu;
  for (turu = 0; turu <= x; turu++)
  {
    if (turu * 2 + (x - turu) * 4 == y)
    {
      printf("Yes");
      return 0;
    }
  }
  printf("No");
}