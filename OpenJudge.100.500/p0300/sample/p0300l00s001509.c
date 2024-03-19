#include <stdio.h>

#define MAX 100
main()
{
  int i, S[MAX], T[MAX], q, count=0, j, n;

  scanf("%d",&n);
  for(i=0; i<n; i++){
    scanf("%d",&S[i]);
  }
  scanf("%d",&q);
  for(i=0; i<q; i++){
    scanf("%d",&T[i]);
  }
  for(i=0; i<n; i++){
    for(j=0; j<q; j++){
      if(S[i]==T[j]){
	count++;
      }
    }
  }
  printf("%d\n",count);
  return 0;
}