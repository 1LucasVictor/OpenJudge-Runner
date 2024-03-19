#include<stdio.h>
#include<string.h>


int main() {
  char S[3];
  int count = 0;
  int i;
  scanf("%s", S);
  for(i = 0; i < 3 - 1; i++) {
    if(S[i] != S[i+1]) {
      count++;
    }
  }
  if(S[3-1] != S[0]) {
    count++;
  }
  if(count > 0) {
    printf("Yes");
  }else {
    printf("No");
  }
  return 0;
}
