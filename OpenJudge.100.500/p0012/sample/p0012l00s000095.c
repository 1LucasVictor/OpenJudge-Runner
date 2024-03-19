#include <stdio.h>

int main()
{
  int stack[101] = {0};
  int n;
  int i = 0;

  while (scanf("%d", &n) != EOF) {

    if (n == 0){
      i--;
      printf("%d\n", stack[i]);
    }

    else {
      stack[i] = n;
      i++;
    }
  }

  return 0;
}