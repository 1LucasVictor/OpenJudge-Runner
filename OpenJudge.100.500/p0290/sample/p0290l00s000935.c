#include <stdio.h>

static const int N = 1000;

int main(){
  int i, j, k, num[N], count = 0;

  scanf("%d",&i);
  for(j = 0; j < i; j++){
    scanf("%d",&num[j]);
  }

  for(j = 0; j < i; j++){
    if(num[j] < 2) break;
    for(k = 2; k < num[j]; k++){
      if(num[j] % k == 0) break;
    }
    if(k == num[j]) count++;
  }

  printf("%d\n",count);
  
  return 0;
}