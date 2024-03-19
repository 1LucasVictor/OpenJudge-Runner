int main(void) {
  long long n, k;
  double b;
  scanf("%lld %lf", &n, &b);
  b=b*100;
  k=n*(long long)b;
  printf("%lld", k/100);
  return 0;
}