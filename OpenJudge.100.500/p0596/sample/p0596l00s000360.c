#include <stdio.h>
#include <string.h>

static char S[100000];
static int N;
int search(int i, int n, char *v) {
  int i_vld, j, j_vld;
  i_vld = 0;
  for(; i < N-1; i++) {
    if(v[i] != 0) {
      i_vld = 1;
      break;
    }
  }
  j_vld = 0;
  for(j = i+1; j < N; j++) {
    if(v[j] != 0) {
      j_vld = 1;
      break;
    }
  }
  if(i_vld == 0 || j_vld == 0)
    return n;
  
  if(S[i] != S[j]) {
    int num0 = search(j+0, n+0, v); // not

    char newV[100000];
    memcpy(newV, v, N);
    newV[i] = 0;
    newV[j] = 0;
    int num1 = search(0, n+2, newV); // yes
    if(num0 < num1) {
      return num1;
    } else {
      return num0;
    }

  } else {
    return search(j+0, n+0, v);// no
  }
}

int main(void) {
  scanf("%s", S);
  N = strlen(S);

  char V[100000];
  memset(V, 1, N);
  printf("%d\n", search(0, 0, V));
  return 0;
}
