#include <stdio.h>

int main(){
  int i, j, l, temp, f, n, u[100], k[100],G[100][100];

  //input
  scanf("%d",&n);
  for(i = 0; i < n; i++){
    scanf("%d%d",&u[i],&k[i]);

    for(j = 0; j < k[i]; j++){
      temp = u[i] - 1;
      scanf("%d",&G[temp][j]);
    }
  }

  //output
  for(i = 0; i < n; i++){
    for(j = 0; j < n; j++){
      f = 0;
      l = 0;
      while(f == 0 && l < k[i]){
	temp = G[i][l] - 1;
	if(j == temp){
	  f++;
	  break;
	}
	l++;
      }
      if(f == 1) printf("1");
      else printf("0");
      if(j != n-1) printf(" ");
    }
    printf("\n");
  }

  return 0;
}
   

  
