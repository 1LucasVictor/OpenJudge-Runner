#include <stdio.h>

int main(void) {
  int input[3];
  int n, cnt, cnt2, flag, tmp;

  scanf("%d", &n);

  for(cnt = 0; cnt < n; ++cnt) {
    scanf("%d %d %d", &input[0], &input[1], &input[2]);

    do {
      flag = 0;
      for(cnt2 = 0; cnt2 < 2; ++cnt2) {
        tmp = 0;
        if(input[cnt2] < input[cnt2 + 1]) {
          tmp = input[cnt2];
          input[cnt2] = input[cnt2 + 1];
          input[cnt2 + 1] = tmp;
          flag = 1;
        }
      }
    } while(flag != 0);
    
    if(((input[2] * input[2]) + (input[1] * input[1])) == (input[0] * input[0])) {
      printf("YES\n");
    }
    else {
      printf("NO\n");
    }
  }

  return 0;
}