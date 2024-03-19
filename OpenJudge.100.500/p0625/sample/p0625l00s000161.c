#include <stdio.h>

int main(int argc, char const *argv[]) {
  int A,B;
  scanf("%d %d",&A,&B);

  if(1<=A && A<=8 && 1<=B &&B<=8 ){
    printf("Yay!");
  }

  else printf(":(");
  return 0;
}