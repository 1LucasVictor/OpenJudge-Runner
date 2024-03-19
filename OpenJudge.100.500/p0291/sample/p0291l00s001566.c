#include <stdio.h>

int main(){
  int n, maxv=-99999999;
  int i = 0, j = 0;
  int r[200000];

  scanf("%d", &n);
  while(i<n){
    scanf("%d", &r[i]);
    i++;
  }
  for(j=1; j<n; j++){
    for(i=0; i<j; i++){
      if(maxv < r[j]-r[i]){
        maxv = r[j]-r[i];
      }
    }
  }
  printf("%d\n", maxv);
}