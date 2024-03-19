int main()
{
  int k, a, b;
  scanf("%d", &k);
  scanf("%d %d", &a, &b);
  int tmp = 0;
  for (int i = 0; tmp < a ; i++)
    tmp = i * k;
  if (tmp <= b)
    printf("OK");
  else
    printf("NG");
}
