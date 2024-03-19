// A - 和風いろはちゃんイージー / Iroha and Haiku (ABC Edition)

#include <stdio.h>

int main(void) {
  int n[3], n5 = 0, n7 = 0;
  scanf("%d %d %d", &n[0], &n[1], &n[2]);
  for (int i = 0; i < 3; i++) {
    if (n[i] == 5) {
      n5++;
    } else if (n[i] == 7) {
      n7++;
    }
  }
  if((n5 == 2) && (n7 == 1)){
    printf("YES\n");
  }else{
    printf("NO\n");
  }
  //printf("%d %d ",n5,n7);
  return 0;
}