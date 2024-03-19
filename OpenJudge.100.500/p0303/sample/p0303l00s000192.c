#include<stdio.h>

int n, k, S[100000];

int maxload(int P){
  int r = k, load = 0, remain = P;
  while(r > 0 && S[load] > 0){
    if(S[load] <= remain){
      remain -= S[load];
      load++;
    } else {
      r--;
      remain = P;
    }
  }
  return load;
}

int main(void){
  int i;
  scanf("%d %d", &n, &k);
  for(i=0;i<n;i++)
    scanf("%d", &S[i]);
  int left = 0, right = 10000 * n, middle;
  while(left != right - 1){
    middle = (left + right - 1) / 2;
    if(maxload(middle) >= n)
      right = middle + 1;
    else
      left = middle + 1;
  }
  printf("%d\n", left);
  return 0;
}