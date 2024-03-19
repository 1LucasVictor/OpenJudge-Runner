#include <stdio.h>
int main(){
  
  int i, j, dst, num;
  char S[100000];
  
  num = 0;
  scanf("%s", S);
  dst = strlen(S);
  
  for(i = 0; i < dst; ++i){
    if((S[i] == '0' && S[i+1] == '1') || (S[i] == '1' && S[i+1] == '0')){
      num += 2;
      dst -= 2;
      for(j = i; j < dst; ++j){
        S[j] = S[j + 2];
      }
      i = -1;
    }
  }
  
  printf("%d\n", num);
  
  return 0;
}
