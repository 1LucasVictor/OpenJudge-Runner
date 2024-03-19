#include<stdio.h>
#include<math.h>

int main(void) {

  int n, v;

  scanf("%d", &n);

  if (n>=1000) {
    printf("error\n");
    return 0;
  }

  v = n%10;

  if (v == 3) {
    printf("bon\n");
  } else if ((v==0)||(v==1)||(v==6)||(v==8)) {
    printf("pon\n");
  } else {
    printf("hon\n");
  }

  return 0;
}
