#include <stdio.h>

int main(int argc, char const *argv[]) {

  int N;
  scanf("%d", &N);

  int n0 = N % 10;
  int n1 = ((N % 100) - n0) / 10;
  int n2 = ((N % 1000) - n1 - n0) / 100;

  if (7 == n0 || 7 == n1 || 7 == n2) {
    printf("Yes\n");
  }else{
    printf("No\n");
  }

  return 0;
}
