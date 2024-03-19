#include<stdio.h>
int main(){
  int unused __attribute__((unused));
  int A[3], cnt5 = 0, cnt7 = 0, i;

  unused = scanf("%d %d %d", &A[0], &A[1], &A[2]);

  for(i=0; i<3; i++){
    if(A[i]==5) cnt5++;
    else if(A[i]==7) cnt7++;
  }
  if(cnt5==2 && cnt7==1) printf("YES");
  else printf("NO");
  return 0;
}