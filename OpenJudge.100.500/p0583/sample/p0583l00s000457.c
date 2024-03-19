#include<stdio.h>
int main(void) {
  int N,A,B,C,D,cnt1,cnt2,flag;
  scanf("%d%d%d%d%d", &N, &A, &B, &C, &D);
  char S[200002];
  scanf("%s", S);
  if(C < D) {
    flag = 1;
    cnt1 = 0;
    for(int i = A-1; i <= D-1; i++) {
      if(S[i] == '#') {
        cnt1++;
      }else{
        cnt1 = 0;
      }
      if(cnt1 == 2) {
        flag = 0;
        break;
      }
    }
  }else{
    cnt1 = 0;
    cnt2 = 0;
    flag = 0;
    for(int i = A-1; i <= C-1; i++) {
      if(B-2 <= i && i <=D-2) {
        if(S[i] == '.') {
          cnt2++;
        }else{
          cnt2 = 0;
        }
        if(cnt2 == 3) {
          flag = 1;
        }
      }
      if(S[i] == '#') {
        cnt1++;
      }else{
        cnt1 = 0;
      }
      if(cnt1 == 2) {
        flag = 0;
        break;
      }
    }
  }
  if(flag == 1) {
    printf("Yes\n");
  }else{
    printf("No\n");
  }
  return 0;
}