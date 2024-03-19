#include <stdio.h>
#include <stdlib.h>

int main(){
  int A,B;
  scanf("%d %d",&A,&B);
  A+=B;
  if(A%2==0) printf("%d\n",A/2);
  else printf("IMPOSSIBLE\n");
  return 0;
}