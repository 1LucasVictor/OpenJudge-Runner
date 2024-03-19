/* C - Tsundoku */

#include <stdio.h>
#include <stdlib.h>

int main(void){
  // int N, M, K, *A, *B, *p, *q, cnt = 0;
  int N, M, K, A[200000], B[200000], *p, *q, cnt = 0;
  scanf("%d %d %d", &N, &M, &K);
  // A = (int*)malloc(sizeof(int) * N);
  // B = (int*)malloc(sizeof(int) * M);
  for(int i = 0; i < N; i++){
    scanf("%d", &A[i]);
  }
  for(int i = 0; i < M; i++){
    scanf("%d", &B[i]);
  }
  p = A;
  q = B;
  while((*p != NULL || *q != NULL) && K > 0){
    if(*p == NULL || *q == NULL){
      if(*p == NULL && *q != NULL){
        if(K < *q) break;
        K -= *q;
        q++;
        cnt++;
      }
      if(*p != NULL && *q == NULL){
        if(K < *p) break;
        K -= *p;
        p++;
        cnt++;
      }
    }else if(*p < *q){
      if(K < *p) break;
      K -= *p;
      p++;
      cnt++;
    }else if(*p > *q){
      if(K < *q) break;
      K -= *q;
      q++;
      cnt++;
    }else if(*p == *q){
      int *p1, *q1;
      p1 = p; q1 = q;
      while(*p1 == *q1){
        p1++; q1++;
        if(p1 == NULL && q1 == NULL){
          if(K < *p) break;
          K -= *p;
          p++;
          cnt++;
        }else if(p1 != NULL && q1 == NULL){
          if(K < *p) break;
          K -= *p;
          p++;
          cnt++;
        }else if(p1 == NULL && q1 != NULL){
          if(K < *q) break;
          K -= *q;
          q++;
          cnt++;
        }else if(*p1 < *q1){
          if(K < *p) break;
          K -= *p;
          p++;
          cnt++;
        }else if(*p1 > *q1){
          if(K < *q) break;
          K -= *q;
          q++;
          cnt++;
        }
      }
    }
    // printf("n=%d: K=%d: A_top=%d: B_top=%d\n", cnt, K, *p, *q);
  }
  printf("%d\n", cnt);
}
