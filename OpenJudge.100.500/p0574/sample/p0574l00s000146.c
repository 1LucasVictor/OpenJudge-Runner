#include <stdio.h>

int Check(int S){
  int i, s0, s;
  s0 = S % 10;
  for(i = 1;i < 4;i++){
    S *= 0.1;
    s = S % 10;
    if(s == s0) return 1;
    s0 = s;
  }
  return 0;
}

int main(void){
  int S;
  scanf("%d", &S);
  if(Check(S) == 1) printf("Bad\n");
  else printf("Good\n");
  return 0;
}
