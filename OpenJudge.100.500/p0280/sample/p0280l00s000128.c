#include <stdio.h>
#include <limits.h>

int main() {
  
  int n,i,j,a,M[100][100],G[100],h[100],gn,weight,min,index;
  
  scanf("%d",&n);
  for (i = 0;i < n;i++){
    G[i] = 1;
    h[i] = 0;
    for (j = 0;j < n;j++) scanf("%d",&M[i][j]);
  }
  
  h[0] = 1;
  G[0] = 0;
  gn = n - 1;
  weight = 0;
  
  while(gn--){
    min = INT_MAX;
    
    for (j = 0;j < n;j++){
      if(!h[j])
	continue;
      for (i = 0;i < n;i++){
	if(!G[i])
	  continue;
	a = M[j][i];
	if (0 <= a && a < min){
	  index = i;
	  min = a;
	}
      }
    }
    h[index] = 1;
    G[index] = 0;
    weight += min;
  }
  printf("%d\n",weight);
  
  return 0;
  
}
