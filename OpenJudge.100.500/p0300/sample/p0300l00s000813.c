#include <stdio.h>
#define LEN 1000

int main()
{
  int n,q,i,j,k=0,frag=0,A[LEN],B[LEN];
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d",&A[i]);
  }
  scanf("%d",&q);
  for(i=0;i<q;i++){
    scanf("%d",&B[i]);
  }
  for(i=0;i<n;i++){
    for(j=0;j<q;j++){
      if(A[i]==B[j]) k++;
    }
  }
  printf("%d\n",k);
  return 0;
}