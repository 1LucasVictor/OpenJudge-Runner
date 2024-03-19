int main(void) {
  int N;
  scanf("%d", &N);
  int n;
  if (100 <= N && N <= 999) {
    n = N % 10 % 10;
  }
  if (0 <= N && N <= 9) {
    n = N;
  }
  if (10 <= N && N <= 99) {
    n = N % 10;
  }
  switch (n) {
    case 2:
    case 4:
    case 5:
    case 7:
    case 9:
      printf("hon\n");
      break;
    case 0:
    case 1:
    case 6:
    case 8:
      printf("pon\n");
      break;
    case 3:
      printf("bon\n");
      break;
  }
  return 0;
}