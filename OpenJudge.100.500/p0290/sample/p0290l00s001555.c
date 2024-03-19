#include <stdio.h>

int main(void){

  int n , i, j, sosu = 0, seisu[10000];

  scanf("%d", &n);

  for(i = 0; i < n; i++){
    scanf("%d", &seisu[i]);
  }

  for(i = 0; i < n; i++){
    for(j = 2; j < seisu[i]/2+1; j++){
      if(seisu[i]%j == 0) break;
      if(seisu[i]%2 == 0) break;
    }
    if(j == seisu[i]/2+1) sosu++;
  }

  printf("%d\n", sosu);
  return 0;
}
  