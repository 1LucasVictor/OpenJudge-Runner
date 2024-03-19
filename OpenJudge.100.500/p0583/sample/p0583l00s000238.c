#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include <string.h>
#define MAX(a,b) ((a > b) ? a : b)
#define MIN(a,b) ((a < b) ? a : b)
#define ABS(a) ((a >= 0) ? a : -(a))

#define MAX_N 200000
int N;
char S[MAX_N];
static char memo[MAX_N];

bool search(int i, int j) {
  //printf("i=%d j=%d S[i-1]=%c\n", i, j, S[i-1]);
  if(i > j)  return false;
  if(memo[i-1] != 0) {
    return (memo[i-1] == 1) ? true : false;
  }
  if(S[i-1] == '#') return false;
  if(i == j) return true;
  
  bool ret0 = search(i+1, j);
  bool ret1 = search(i+2, j);
  if(ret0 == true || ret1 == true) {
    memo[i-1] = 1;
    return true;
  } else {
    memo[i-1] = 2;
    return false;
  }
}

int main(void) {
  int A, B, C, D;
  scanf("%d%d%d%d%d", &N, &A, &B, &C, &D);
  scanf("%s", S);

  if(C > D) {
    bool two = false;
    for(int i = (B+1); i < (D-2); i++) {
       if(S[i-1] == '.' && S[i] == '.'){
	two = true;
	break;
      }
    }

    if(two == false) {
      printf("No\n");
      return 0;
    }
    int tmp = C;
    C = D;
    D = tmp;
  }
  
  // funuke
  bool ret = search(B, D);
  if(ret == false) {
    printf("No\n");
    return 0;
  }

  // sunuke
  ret = search(A, C);
  if(ret == false) {
    printf("No\n");
    return 0;
  }
  
  printf("Yes\n");
  return 0;
}
