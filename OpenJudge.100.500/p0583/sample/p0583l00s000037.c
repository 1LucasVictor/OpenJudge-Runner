#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include <string.h>

#define MAX_N 20001
int N, C, D;
char S[MAX_N];
static char memo0[MAX_N];

bool search0(int i, int j) {
  //printf("i=%d j=%d S[i-1]=%c\n", i, j, S[i-1]);
  if(i > j)  return false;
  if(memo0[i-1] != 0) {
    return (memo0[i-1] == 1) ? true : false;
  }
  if(S[i-1] == '#') return false;
  if(i == j) return true;
  
  bool ret0 = search0(i+1, j);
  bool ret1 = search0(i+2, j);
  if(ret0 == true || ret1 == true) {
    memo0[i-1] = 1;
    return true;
  } else {
    memo0[i-1] = 2;
    return false;
  }
}

bool search(int a, int b) {
  if(((a < b) && (C < D)) || ((b < a) && (D < C))) {
    bool ret0 = search0(a, C);
    bool ret1 = search0(b, D);
    return (ret0 && ret1);
  }
  if(a == b) return false;
  if(a > C)  return false;
  if(b > D)  return false;
  if((b < a) && (C < D)) return false;

  if(S[a-1] == '#') return false;
  if(S[b-1] == '#') return false;
  if(a == C && b == D) return true;

  if(search(a+1, b)) {
    return true;
  }
  if(search(a+2, b)) {
    return true;
  }
  if(search(a, b+1)) {
    return true;
  }    
  if(search(a, b+2)) {
    return true;
  }    

  return false;
}

int main(void) {
  int A, B;
  scanf("%d%d%d%d%d", &N, &A, &B, &C, &D);
  scanf("%s", S);

  if(search(A, B)) {
    printf("Yes\n");
  } else {
    printf("No\n");
  }
  return 0;
}
