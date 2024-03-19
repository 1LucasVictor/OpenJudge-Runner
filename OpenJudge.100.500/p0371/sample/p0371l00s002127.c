int main() {
  int n, a, max = -1000000, min = 1000000;
  long sum = 0;
  scanf("%d\n", &n);
  for (int i = 0; i < n; i++) {
    scanf("%d", &a);
    if (a > max) max = a;
    if (a < min) min = a;
    sum += a;
  }
  printf("%d %d %ld\n", min, max, sum);
}
