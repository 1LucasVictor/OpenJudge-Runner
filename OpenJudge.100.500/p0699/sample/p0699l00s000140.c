#include<stdio.h>
int main() {
  int A[3];
  int a = 0, b = 0;
  scanf("%d %d %d",&A[0],&A[1],&A[2]);
  for(int i = 0; i < 3; i++) {
    if(A[i] == 5) a++;
    if(A[i] == 7) b++;
  }
  if(a == 2 && b == 1) printf("YES");
  else printf("NO");
  return 0;
}