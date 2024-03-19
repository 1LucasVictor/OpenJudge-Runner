#include <stdio.h>
int main(){
  int an[5];
  int k;
  for(int i=0; i<5; i++){
    scanf("%d", &an[i]);
  }
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
