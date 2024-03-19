#include <stdio.h>
int main(){
  int an[5];
  int k;
  scanf("%d", &an[0]);
  scanf("%d", &an[1]);
  scanf("%d", &an[2]);
  scanf("%d", &an[3]);
  scanf("%d", &an[4]);
  scanf("%d", &k);

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
