#include <stdio.h>
int main(void){
  int i, j, k;
  while(1){
  int n, x, c=0;
  scanf("\n%d %d", &n, &x);
  if(n == 0 && x == 0){return 0;}
  else {
    for (i=1; i<=n; i++){
      for (j=i+1; j<=n; j++){
	for (k=j+1; k<=n; k++){
	  if(i+j+k==x){c=c+1;break;}
	}
      }
    }
  }
  printf("%d\n", c);
  }
}