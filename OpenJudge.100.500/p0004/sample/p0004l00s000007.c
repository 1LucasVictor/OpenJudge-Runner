#include <stdio.h>

int cmp_max(int a, int b){
  if(a < b){
    return (b);
  }else{
    return (a);
  }
}

int cmp_min(int a, int b){
  if(a < b){
    return (a);
  }else{
    return (b);
  }
}
int main(){
  int a, b;
  int result1, result2, i;
  int min, max;
  while(scanf("%d %d", &a, &b) != EOF){
    result1 = result2 = 0;
    min = cmp_min(a, b);
    max = cmp_max(a, b);
    for(i = 1; i <= max; i++){
      if(a % i == 0 && b % i == 0){
	result1 = i;
      }
    }
    for(i = max;;i++){
      if(i % a == 0 && i % b == 0){
	result2 = i;
	break;
      }
    }
    printf("%d %d\n", result1, result2);
  }
  return 0;
}