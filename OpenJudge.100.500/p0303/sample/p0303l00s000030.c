#include <stdio.h>

#define BAGGAGE 131072
#define TRACK 131072

int checkP(int n, int k, int w[], int P) {
  int i, j, W[TRACK]= {0};

  //  puts("");
  j = 1;
  for (i = 0; i < n; i++) {
    if ((W[j] + w[i]) <= P) {
      W[j] += w[i];
      //  printf("W[%d]:%d\n", j, W[j]);
    }
    else {
      i--;
      j++;
      //      printf("over! j->%d\n", j);
      if (k < j) {
	//	printf("j over P! recursive\n");
	return checkP(n, k, w, P + 1);
      }
    }
  }
  //  printf("%d\n", P);
  return P;
}


int main(void) {
  int i, n, k, w[BAGGAGE] = {0}, P;
  double W = 0;
  
  scanf("%d %d", &n, &k);
  for (i = 0; i < n; i++) {
    scanf("%d", &w[i]);
    W += w[i];
  }
  // calculate average and round up
  P = (int)(W / k + 0.9);
  for (i = 0; i < n; i++) {
    if (P < w[i])
      P = w[i];
  }

  P = checkP(n, k, w, P);
  printf("%d\n", P);

  return 0;
}