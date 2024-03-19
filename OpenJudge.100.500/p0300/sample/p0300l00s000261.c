#include <stdio.h>

int main(){
  int n,q,x,i,j,count=0;
  int S[10000];

  scanf("%d",&n);
  for(i=0;i<n;i++)
    scanf("%d",&S[i]);

  scanf("%d",&q);
  for(i=0;i<q;i++){
    scanf("%d",&x);
    for(j=0;j<n;j++)
      if(S[j]==x)
	count++;
  }

  printf("%d\n",count);

  return 0;
}