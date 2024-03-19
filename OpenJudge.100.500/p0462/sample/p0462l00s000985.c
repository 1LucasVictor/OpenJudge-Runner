int main(void) {
  long long n, k;
  double b;
  scanf("%lld %lf", &n, &b);
  b=b*100;
  k=b*n/100;
  printf("%lld", k);
}