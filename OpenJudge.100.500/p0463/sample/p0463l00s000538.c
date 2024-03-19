int main()
{
  int n;
  scanf("%d", &n);
  int tmp = n % 10;
  if (tmp == 3)
    printf("bon");
  else if (tmp == 0 || tmp == 1 || tmp == 6 || tmp == 8)
    printf("pon");
  else
    printf("hon");
}