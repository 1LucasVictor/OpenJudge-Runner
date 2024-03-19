#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>
#include <stdlib.h>

char S[200000];

int one_move(int *p, int *o, int target)
{
  int P = *p;
  int O = *o;

//  printf("P=%d target=%d\n", P, target);

  if (P < (target - 1)) {
    if (((P+2) != O) &&
        (S[P+2] == '.')) {
      P += 2;
      *p = P;
//      printf("P=%d target=%d (moved)\n", P, target);
      return 0;
    }
  }

  if (P < (target - 0)) {
    if (((P+1) != O) &&
        (S[P+1] == '.')) {
      P += 1;
      *p = P;
//      printf("P=%d target=%d (moved)\n", P, target);
      return 0;
    }
  }
  return 1;
}

int move_to_wait(int *p, int *o, int target)
{
  int P = *p;
  int O = *o;

//  printf("P=%d target=%d\n", P, target);

  while (1) {
    if ((S[P - 1] == '.') && (S[P + 1] == '.')) return 0;

    if (P < (target - 0)) {
      if (((P+1) != O) &&
          (S[P+1] == '.')) {
        P += 1;
        *p = P;
//        printf("P=%d target=%d (moved)\n", P, target);
        continue;
      }
    }
    if (P < (target - 1)) {
      if (((P+2) != O) &&
          (S[P+2] == '.')) {
        P += 2;
        *p = P;
//        printf("P=%d target=%d (moved)\n", P, target);
        continue;
      }
    }
    
    break;
    
  }//while

  return 1;
}

int main()
{
  int cnt;
  int i;
  int N,A,B,C,D;
  int comp = 0;
  int ret;

  cnt = scanf("%d %d %d %d %d", &N, &A, &B, &C, &D);
  cnt = scanf("%s", S);
//  printf("%s\n", S);
  A--;
  B--;
  C--;
  D--;

  if (C > D) {
    move_to_wait(&B, &A, D);
  }

  while (comp == 0) {
    if ((A == C) && (B == D)) {
      printf("Yes");
      return 0;
    }

    if (A < C) {
      ret = one_move(&A, &B, C);
      if (ret == 0) continue;
      ret = one_move(&B, &A, D);
      if (ret == 0) continue;
      printf("No");
      return 0;
    }

    if (B < D) {
      ret = one_move(&B, &A, D);
      if (ret == 0) continue;
      ret = one_move(&A, &B, C);
      if (ret == 0) continue;
      printf("No");
      return 0;
    }

  }// while

  printf("No");

  return 0;
}

