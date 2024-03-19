#include <stdio.h>

int main(){
  int n,u,k,i,j,v[1000],x[1000][1000];

  scanf("%d",&n);

  for(i = 0; i < n; i++){
    scanf("%d%d",&u,&k);
    for(j = 0; j < k; j++){
      scanf("%d",&v[i]);
      x[u-1][v[i]-1] = 1;
	 }
  }

  for(i = 0; i < n; i++){
    for(j = 0; j < n; j++){
      if(j == 0){
	if(x[i][j] == 1) printf("1");
	else printf("0");
      }
      else{
	if(x[i][j] == 1) printf(" 1");
	else printf(" 0");
      }
    }
    printf("\n");
  }

  return 0;
}
	