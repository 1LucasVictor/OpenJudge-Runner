#include <stdio.h>
int main(){
  int an[5];
  int k;
  scanf("%d\n", &an[0]);
  scanf("%d\n", &an[1]);
  scanf("%d\n", &an[2]);
  scanf("%d\n", &an[3]);
  scanf("%d\n", &an[4]);
  scanf("%d\n", &k);

  for(int i = 0; i < 5; i++) {
    for(int j = i; j < 5; j++) {
      if(an[j] - an[i] > k) {
        printf(":(\n");
        return 0;
      }
    }
  }
  printf("Yay!\n");
  return 1;
}
