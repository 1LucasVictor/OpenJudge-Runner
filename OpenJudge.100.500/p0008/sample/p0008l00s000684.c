#include <stdio.h>
int prime(int a){
  int i;
  for(i = 2;i * i <= a;i++){
    if(a % i == 0) return 0;
  }
  return 1;
}
  
int main(){
  int   n, c, a;
  while(scanf("%d", &n)!=EOF){
    c = 0;  
  for(a = 2;a <= n;a++){
    c += prime(a);
  }
  printf("%d\n", c);
  }
  return 0;
}

