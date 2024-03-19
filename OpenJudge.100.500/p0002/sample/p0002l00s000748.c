#include <stdio.h>

int main() {
  int N, i, in1, in2, in3, a, b, c;

  scanf("%d", &N);

  for(i = 0; i < N; ++i) {

    scanf("%d %d %d", &in1, &in2, &in3);

    if(in1 >= in2 && in1 >= in3) {
      a = in2;
      b = in3;
      c = in1;
    } else if(in2 >= in1 && in2 >= in3) {
      a = in1;
      b = in3;
      c = in2;
    } else if(in3 >= in1 && in3 >= in2) {
      a = in1;
      b = in2;
      c = in3;
    }

    if(a*a + b*b == c*c) {
      printf("YES\n");
    } else {
      printf("NO\n");
    }
  }
  return 0;
}