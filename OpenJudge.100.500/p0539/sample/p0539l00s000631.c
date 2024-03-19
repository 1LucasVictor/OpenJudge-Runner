#include <stdio.h>

int main(void){
   int n;
   scanf("%d", &n);
   int L[81];
   int i,j,k;
   int cnt = 0;
   int bo = 0;
   for (i = 1; i < 10; i++){
     for (j = 1; j < 10; j++){
       L[cnt] = i*j;
       cnt++;
     }
   }
  for (k = 0; k < 81; k++){
    if (L[k] == n){
      bo++;
    }
  }
  if (bo > 0){
    printf("Yes\n");
  }
  else{
    printf("No\n");
  }
  return 0;
}