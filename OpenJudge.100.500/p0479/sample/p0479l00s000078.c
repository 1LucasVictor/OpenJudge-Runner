#include<stdio.h>
 
int main()
{
  int N;
  int i;
  int A;
  int shain[200000];
 
  scanf("%d", &N);
  
  for(i = 1; i < N; i++) {
    scanf("%d", &A);
    shain[A - 1] += 1;
  }
 
  for(i = 0; i < N; i++) {
    printf("%d\n", shain[i]);
  }
 
  return 0;
}