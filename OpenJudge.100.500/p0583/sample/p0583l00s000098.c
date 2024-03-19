#include <stdio.h>

int max(int a,int b){
  if(a > b){
    return a;
  }
  return b;
}

int main(void){
  int N, A, B, C, D;
  scanf("%d%d%d%d%d", &N, &A, &B, &C, &D);

  char S[N];
  scanf("%s", S);

  // A\toC B\toD
  int cnt = 0;
  for (int i = A; i <= max(C, D); i++) {
    if(S[i] == '#'){
      cnt++;
      if(cnt == 2){
        printf("No\n");
        return 0;
      }else cnt = 0;
    }
  }

  if(C < D){
    printf("Yes\n");
    return 0;
  }else{
    cnt = 0;
    for (int i = B-2; i <= D; i++) {
      if(S[i] == '.'){
        cnt++;
        if(cnt == 3){
          printf("Yes\n");
          return 0;
        }
      }else cnt = 0;
    }
    printf("No\n");
    return 0;
  }
  
  return 0;
}