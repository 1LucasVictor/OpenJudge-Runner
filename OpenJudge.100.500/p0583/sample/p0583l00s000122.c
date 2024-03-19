#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include <string.h>

#define MAX_N 20001
int N, C, D;
char S[MAX_N];
static char memo0[MAX_N];
static char memo[MAX_N][MAX_N];

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
  if(a > C) return false;
  if(b > D) return false;
  if(a == b) return false;
  if((a > b) && (C < D)) return false;
  if((a < b) && (C < D)) {
    bool ret0 = search0(a, C);
    bool ret1 = search0(b, D);
    return (ret0 || ret1);
  }

  if(memo[a-1][b-1] != 0) {
    return (memo[a-1][b-1] == 1) ? true : false;
  }
  
  if(S[a-1] == '#') return false;
  if(S[b-1] == '#') return false;
  if(a == C && b == D) return true;

  bool ret0, ret1, ret2, ret3;
  ret0 = ret1 = ret2 = ret3 = true;  
  ret0 = search(a+1, b);
  ret1 = search(a+2, b);
  ret2 = search(a, b+1);
  ret3 = search(a, b+2);
  if(ret0 || ret1 || ret2 || ret3) {
    memo[a-1][b-1] = 1;
    return true;
  } else {
    memo[a-1][b-1] = 2;
    return false;
  }
}

int main(void) {
  int A, B;
  scanf("%d%d%d%d%d", &N, &A, &B, &C, &D);
  scanf("%s", S);

  if(search(A, B) == true) {
    printf("Yes\n");
  } else {
    printf("No\n");
  }
  return 0;
}
