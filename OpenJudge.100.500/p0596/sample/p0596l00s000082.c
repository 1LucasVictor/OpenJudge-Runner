#include "stdio.h"
#include "string.h"

int main(int argc, char const *argv[]) {
  char S[200000];
  scanf("%s", S);
  int N=strlen(S);
  // for (size_t i = 0; i < N; i++) {
  //   printf("%c", S[i]);
  // }
  int Si[N];
  for (size_t i = 0; i < N; i++) {
    Si[i]=S[i]-'0';
  }
  // for (size_t i = 0; i < N; i++) {
  //   printf("%d", Si[i]);
  // }
  int zero=0;
  int one=0;
  for (size_t i = 0; i < N; i++) {
    if (Si[i]==0) {
      zero++;
    }else{
      one++;
    }
  }
  int ans=0;
  if (zero>one) {
    ans=N-(zero-one);
  }else{
    ans=N-(-zero+one);
  }
  printf("%d",ans);
  return 0;
}
