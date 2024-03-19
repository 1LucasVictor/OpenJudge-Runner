int main()
{
  int a[4];
  int i = 0;
  while (i < 4)
  {
    scanf("%d ",&a[i]);
    //if (i % 2 == 0 && i != 0)
    i++;
  }
  if (a[0] % 2 == 0 || a[1] % 2 == 0)
    printf("Even");
  else
    printf("Odd");
}