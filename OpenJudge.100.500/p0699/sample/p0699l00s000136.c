#include <stdio.h>
int main(){

  int A,B,C;
  scanf("%d%d%d",&A,&B,&C);

  if(B<A && B==C)printf("YES\n");
  else  if(A<B && A==C)printf("YES\n");
  else  if(B<C && B==A)printf("YES\n");
  else printf("NO\n");

  return 0;
}
