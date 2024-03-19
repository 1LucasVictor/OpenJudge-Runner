/* abc_165_a */

#include<stdio.h>

int main()
{
  int K,A,B,a,i;
  a=1;
  scanf("%d",&K);
  scanf("%d %d",&A, &B);
  for (i=A;i<=B;i++){
    if (i%K==0){
      a=0;
      break;
    }
  }
  if (a==0) printf("OK\n");
  else printf("NG\n");
  return 0;
}
