#include <stdio.h>
#include <math.h>
int main() {
  int n, m, result;
  if (scanf("%d %d", &n, &m) <= 0) {
    printf("fail");
  }
  int s[m], c[m], num[n];
  int i = 0;
  while(i < m) {
    if (scanf("%d %d", &s[i], &c[i]) <= 0) {
      printf("fail");
    }
    i++;
  }
  i = 0;
  while(i < n) {
    num[i] = -1;
    i++;
  }

  i = 0;
  result = 0;
  while(i < m) {
    if (num[s[i] - 1] != -1 && num[s[i] - 1] != c[i]) {
      result = -1;
      break;
    } else if (s[i] > n) {
      result = -1;
      break;
    } else {
      num[s[i] - 1] = c[i];
    }
    i++;
  }

  if (num[0] == -1 || (n != 1 && num[0] == 0)) {
    result = -1;
  }

  i = 0;
  while(i < n) {
    if(num[i] == -1) {
      num[i] = 0;
    }
    i++;
  }

  if (result != -1) {
    int tmp;
    tmp = n - 1;
    i = 0;
    while(i < n) {
      result = result + num[i] * pow(10, tmp);
      i++;
      tmp--;
    }
  }

  printf("%d", result);

  return 0;
}