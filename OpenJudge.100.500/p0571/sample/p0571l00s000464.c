#include <stdlib.h>
#include <stdio.h>

void main(){
  int n,a,b;
  scanf("%d %d %d", &n, &a, &b);
  if((a * n) < b){
    printf("%d", a * n);
  }else{
    printf("%d", b);
  }
return;
}
